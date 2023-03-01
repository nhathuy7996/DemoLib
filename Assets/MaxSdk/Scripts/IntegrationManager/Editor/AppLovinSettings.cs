//
//  AppLovinSettings.cs
//  AppLovin MAX Unity Plugin
//
//  Created by Santosh Bagadi on 1/27/20.
//  Copyright © 2019 AppLovin. All rights reserved.
//

using AppLovinMax.Scripts.IntegrationManager.Editor;
using System.IO;
using UnityEditor;
using UnityEngine;

/// <summary>
/// A <see cref="ScriptableObject"/> representing the AppLovin Settings that can be set in the Integration Manager Window.
///
/// The scriptable object asset is created with the name <c>AppLovinSettings.asset</c> and is placed under the directory <c>Assets/MaxSdk/Resources</c>.
///
/// NOTE: Not name spacing this class since it is reflected upon by the Google adapter and will break compatibility.
/// </summary>
public class AppLovinSettings : ScriptableObject
{
    public const string SettingsExportPath = "MaxSdk/Resources/AppLovinSettings.asset";

    private static AppLovinSettings instance;

    [SerializeField] private bool qualityServiceEnabled = true;
    [SerializeField] private string sdkKey;

    [SerializeField] private bool setAttributionReportEndpoint;

    [SerializeField] private string adMobAndroidAppId = string.Empty;
    [SerializeField] private string adMobIosAppId = string.Empty;

    [SerializeField] private bool showInternalSettingsInIntegrationManager;

    /// <summary>
    /// An instance of AppLovin Setting.
    /// </summary>
    public static AppLovinSettings Instance
    {
        get
        {
            if (instance == null)
            {
                string settingsFilePath;
                // The settings file should be under the Assets/ folder so that it can be version controlled and cannot be overriden when updating.
                // If the plugin is outside the Assets folder, create the settings asset at the default location.
                if (AppLovinIntegrationManager.IsPluginOutsideAssetsDirectory)
                {
                    // Note: Can't use absolute path when calling `CreateAsset`. Should use relative path to Assets/ directory.
                    settingsFilePath = Path.Combine("Assets", SettingsExportPath);

                    var maxSdkDir = Path.Combine(Application.dataPath, "MaxSdk");
                    if (!Directory.Exists(maxSdkDir))
                    {
                        Directory.CreateDirectory(maxSdkDir);
                    }
                }
                else
                {
                    settingsFilePath = Path.Combine(AppLovinIntegrationManager.PluginParentDirectory, SettingsExportPath);
                }

                var settingsDir = Path.GetDirectoryName(settingsFilePath);
                if (!Directory.Exists(settingsDir))
                {
                    Directory.CreateDirectory(settingsDir);
                }

                instance = AssetDatabase.LoadAssetAtPath<AppLovinSettings>(settingsFilePath);
                if (instance != null) return instance;

                instance = CreateInstance<AppLovinSettings>();
                AssetDatabase.CreateAsset(instance, settingsFilePath);
            }

            return instance;
        }
    }

    /// <summary>
    /// Whether or not to install Quality Service plugin.
    /// </summary>
    public bool QualityServiceEnabled
    {
        get { return Instance.qualityServiceEnabled; }
        set { Instance.qualityServiceEnabled = value; }
    }

    /// <summary>
    /// AppLovin SDK Key.
    /// </summary>
    public string SdkKey
    {
        get { return Instance.sdkKey; }
        set { Instance.sdkKey = value; }
    }

    /// <summary>
    /// Whether or not to set `NSAdvertisingAttributionReportEndpoint` in Info.plist.
    /// </summary>
    public bool SetAttributionReportEndpoint
    {
        get { return Instance.setAttributionReportEndpoint; }
        set { Instance.setAttributionReportEndpoint = value; }
    }

    /// <summary>
    /// AdMob Android App ID.
    /// </summary>
    public string AdMobAndroidAppId
    {
        get { return Instance.adMobAndroidAppId; }
        set { Instance.adMobAndroidAppId = value; }
    }

    /// <summary>
    /// AdMob iOS App ID.
    /// </summary>
    public string AdMobIosAppId
    {
        get { return Instance.adMobIosAppId; }
        set { Instance.adMobIosAppId = value; }
    }

    public bool ShowInternalSettingsInIntegrationManager
    {
        get { return Instance.showInternalSettingsInIntegrationManager; }
        set { Instance.showInternalSettingsInIntegrationManager = value; }
    }

    /// <summary>
    /// Saves the instance of the settings.
    /// </summary>
    public void SaveAsync()
    {
        EditorUtility.SetDirty(instance);
    }
}
