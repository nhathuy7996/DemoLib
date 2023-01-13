#if UNITY_EDITOR
using UnityEngine;
using UnityEditor;
using UnityEditor.PackageManager.UI;
using com.adjust.sdk;
using GoogleMobileAds.Editor;
using System;
using HuynnLib;
using Facebook.Unity.Settings;
using Codice.Client.BaseCommands;
using System.IO;

class ProjectInfoEditor : EditorWindow
{

    
    Adjust adjustGameObject;


    GoogleMobileAdsSettings gg = null;

    HuynnLib.AdManager adManager = null;
    AppLovinSettings max = null;

    BuildPlayerOptions defaultBuildOptions = new BuildPlayerOptions();

    // Add menu named "My Window" to the Window menu
    [MenuItem("3rdLib/Checklist APERO")]
    public static void InitWindowEditor()
    {
        // This method is called when the user selects the menu item in the Editor
        EditorWindow wnd = GetWindow<ProjectInfoEditor>();
        wnd.titleContent = new GUIContent("Huynn 3rdLib - APERO version!");

    }

    void OnGUI()
    {
        #region EDITOR
        EditorGUILayout.LabelField("Build Version:");

        PlayerSettings.Android.bundleVersionCode = EditorGUILayout.IntField("Version Code", PlayerSettings.Android.bundleVersionCode);

        PlayerSettings.bundleVersion = EditorGUILayout.TextField("App Version", PlayerSettings.bundleVersion);
        string applicationIdentifier = EditorGUILayout.TextField("Package Name", PlayerSettings.applicationIdentifier);
        PlayerSettings.SetApplicationIdentifier(BuildTargetGroup.Android, applicationIdentifier);
        
        #endregion

        #region ADJUST

        if (adjustGameObject)
        {
            EditorGUILayout.Space(20);
            EditorGUILayout.LabelField("Adjust:");
            adjustGameObject.appToken = EditorGUILayout.TextField("Adjust Token", adjustGameObject.appToken);


            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.PrefixLabel("Adjust Mode");
            string adjustEvironment = adjustGameObject.environment.ToString();
            bool dropDownSelected = EditorGUILayout.DropdownButton(content: new GUIContent(adjustEvironment), FocusType.Passive);
            EditorGUILayout.EndHorizontal();

            if (dropDownSelected)
            {

                GenericMenu menu = new GenericMenu();

                AddMenuItemForColor(menu, AdjustEnvironment.Production.ToString(), AdjustEnvironment.Production,
                    adjustGameObject.environment == AdjustEnvironment.Production);
                AddMenuItemForColor(menu, AdjustEnvironment.Sandbox.ToString(), AdjustEnvironment.Sandbox,
                     adjustGameObject.environment == AdjustEnvironment.Sandbox);
                menu.ShowAsContext();
            }


            EditorGUILayout.Space(20);
            EditorGUILayout.LabelField("Events Token:");


            FireBaseManager fireBaseManager = GameObject.FindObjectOfType<FireBaseManager>();
            if (fireBaseManager)
            {
                fireBaseManager.ADValue = EditorGUILayout.TextField("ad_value", fireBaseManager.ADValue);
                fireBaseManager.Level_Achived = EditorGUILayout.TextField("level_achived", fireBaseManager.Level_Achived);
            }
            PrefabUtility.RecordPrefabInstancePropertyModifications(fireBaseManager);
            PrefabUtility.RecordPrefabInstancePropertyModifications(adjustGameObject);
        }
        else
        {
            adjustGameObject = GameObject.FindObjectOfType<Adjust>();
        }
        #endregion

        #region GOOGLE ADS SETTING
        EditorGUILayout.Space(20);
        EditorGUILayout.LabelField("Google:");

        if (gg)
        {
            gg.GoogleMobileAdsAndroidAppId = EditorGUILayout.TextField("Android AD ID", gg.GoogleMobileAdsAndroidAppId);
            PrefabUtility.RecordPrefabInstancePropertyModifications(gg);
        }
        else
        {
            string[] ggSetting = UnityEditor.AssetDatabase.FindAssets("t:GoogleMobileAdsSettings");
            if (ggSetting.Length != 0)
            {
                string path = UnityEditor.AssetDatabase.GUIDToAssetPath(ggSetting[0]);
                gg = UnityEditor.AssetDatabase.LoadAssetAtPath<GoogleMobileAdsSettings>(path);
            }
            else
            {
                EditorGUILayout.LabelField("Can not find GoogleMobileAdsSettings!");
            }
        }
        #endregion

        if (!adManager)
            adManager = GameObject.FindObjectOfType<HuynnLib.AdManager>();
        #region APPLOVIN
        EditorGUILayout.Space(20);
        EditorGUILayout.LabelField("AppLovin:");
        if (max != null)
        {
            max.SdkKey = EditorGUILayout.TextField("MaxSdk key", max.SdkKey);
            if (adManager)
                adManager.MaxSdkKey = max.SdkKey;
            if (gg != null)
            {
                max.AdMobAndroidAppId = gg.GoogleMobileAdsAndroidAppId;
                EditorGUILayout.LabelField("Android AD ID:                       " + max.AdMobAndroidAppId);
            }
            else
            {
                max.AdMobAndroidAppId = EditorGUILayout.TextField("Android AD ID", max.AdMobAndroidAppId);
            }
            PrefabUtility.RecordPrefabInstancePropertyModifications(max);
        }
        else
        {
            string[] maxSetting = UnityEditor.AssetDatabase.FindAssets("t:AppLovinSettings");
            if (maxSetting.Length != 0)
            {
                string path = UnityEditor.AssetDatabase.GUIDToAssetPath(maxSetting[0]);
                max = UnityEditor.AssetDatabase.LoadAssetAtPath<AppLovinSettings>(path);
            }
            else
            {
                Debug.LogError("Can not find MaxSdkSetting!");
            }
        }

        #endregion

        #region FACEBOOK
        string[] facebookSetting = UnityEditor.AssetDatabase.FindAssets("t:FacebookSettings");
        if (facebookSetting.Length != 0)
        {
            EditorGUILayout.Space(20);
            EditorGUILayout.LabelField("Facebook:                               - chịu, ĐM FB");

            string path = UnityEditor.AssetDatabase.GUIDToAssetPath(facebookSetting[0]);
            //FacebookSettings max = UnityEditor.AssetDatabase.LoadAssetAtPath<FacebookSettings>(path);
            //Debug.LogError(max.GetInstanceID());


        }
        else
        {
            Debug.LogError("Can not find MaxSdkSetting!");
        }

        #endregion

        #region AD ID SETTING
        if (adManager)
        {
            EditorGUILayout.Space(20);
            EditorGUILayout.LabelField("AD IDs:");
            adManager.BannerAdUnitID = EditorGUILayout.TextField("Banner ID", adManager.BannerAdUnitID);
            adManager.InterstitialAdUnitID = EditorGUILayout.TextField("Inter ID", adManager.InterstitialAdUnitID);
            adManager.RewardedAdUnitID = EditorGUILayout.TextField("Reward ID", adManager.RewardedAdUnitID);
            adManager.OpenAdUnitID = EditorGUILayout.TextField("AppOpen ID", adManager.OpenAdUnitID);

            PrefabUtility.RecordPrefabInstancePropertyModifications(adManager);
        }
        #endregion

        EditorGUILayout.Space(20);

        EditorGUILayout.BeginHorizontal();
        if (GUILayout.Button("Check google-services.json"))
        {
            BuildProcess.CheckFirebaseJson();
        }
        if (GUILayout.Button("Check google-services.xml"))
        {
            BuildProcess.FixGoogleXml();
        }
        EditorGUILayout.EndHorizontal();

        EditorGUILayout.BeginHorizontal();
        
       
        if (GUILayout.Button("Build"))
        {

            EditorWindow.GetWindow(Type.GetType("UnityEditor.BuildPlayerWindow,UnityEditor"));
        }
        EditorGUILayout.EndHorizontal();

        if (GUILayout.Button("Close"))
        {
            Close();
            GUIUtility.ExitGUI();
        }
    }

    void AddMenuItemForColor(GenericMenu menu, string menuPath, AdjustEnvironment value, bool isSelected = false)
    {
        // the menu item is marked as selected if it matches the current value of m_Color
        menu.AddItem(new GUIContent(menuPath), isSelected, OnDropBoxAdjustItemClick, value);
    }

    void OnDropBoxAdjustItemClick(object item)
    {
        Adjust adjustGameObject = GameObject.FindObjectOfType<Adjust>();
        adjustGameObject.environment = (AdjustEnvironment)item;
    }


}
#endif