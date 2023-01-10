﻿using Firebase;
using Firebase.Messaging;
using Firebase.Analytics;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Threading.Tasks;
using ConfigValue = Firebase.RemoteConfig.ConfigValue;
using Firebase.RemoteConfig;
using System.ComponentModel;
using static UnityEngine.UIElements.UxmlAttributeDescription;
using UnityEngine.Device;
using System.Linq;
using System.Text.RegularExpressions;

namespace HuynnLib
{
    public class FireBaseManager : Singleton<FireBaseManager>, IChildLib
    {

        [SerializeField]
        string _adjsutLevelAchived, _adValue;

        #region For AD event

        AD_TYPE _adTypeLoaded = AD_TYPE.open;
        public AD_TYPE adTypeShow = AD_TYPE.resume;

        #endregion

        private bool _isFetchDone = false;

        public bool isFetchDOne => _isFetchDone;

        [SerializeField]
        private List<string> _keyConfigs = new List<string>();


        Firebase.DependencyStatus dependencyStatus = Firebase.DependencyStatus.UnavailableOther;


        public void Init(Action _onActionDone)
        {
            Debug.Log("==========> Firebase start Init! <==========");

            Firebase.FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task =>
            {
                var dependencyStatus = task.Result;
                if (dependencyStatus == Firebase.DependencyStatus.Available)
                {
                    // Create and hold a reference to your FirebaseApp,
                    // where app is a Firebase.FirebaseApp property of your application class.
                    Firebase.FirebaseApp app = Firebase.FirebaseApp.DefaultInstance;
                    InitializeFirebase();

                    _onActionDone?.Invoke();
                    // Set a flag here to indicate whether Firebase is ready to use by your app.
                }
                else
                {
                    UnityEngine.Debug.LogError(System.String.Format(
                      "==> Could not resolve all Firebase dependencies: {0} <==", dependencyStatus));
                    // Firebase Unity SDK is not safe to use here.

                    _onActionDone?.Invoke();
                }
            });
        }


        void InitializeFirebase()
        {
            System.Collections.Generic.Dictionary<string, object> defaults =
                new System.Collections.Generic.Dictionary<string, object>();
            FetchFireBase();
        }

        public void FetchFireBase()
        {
            FetchDataAsync();
        }

        /// <summary>
        /// Wait to get a value from Firebase remote config
        /// </summary>
        /// <param name="key">key name on Firebase remote</param>
        /// <param name="waitOnDone">callback when get data success</param> 
        public async Task GetValueRemoteAsync(string key, Action<ConfigValue> waitOnDone) 
        {
     
            double countTime = 0;
            while (!_isFetchDone && countTime < 360000f)
            {
                countTime += 1000;
                await Task.Delay(1000);
            }

            if (countTime >= 360000f)
            {
                Debug.LogError(string.Format("==>Fetch data {0} fail, becuz time out! Check your network please!<==", key));
                return;
            }

            if (!_keyConfigs.Contains(key))
            {
                Debug.LogError(string.Format("==>Remote dont have key {0} !<==", key));
                return;
            }

            var obj = FirebaseRemoteConfig.DefaultInstance.GetValue(key);
            waitOnDone?.Invoke(obj);
        }

        // Start a fetch request.
        public Task FetchDataAsync()
        {
            Debug.Log("Fetching data...");
            // FetchAsync only fetches new data if the current data is older than the provided
            // timespan.  Otherwise it assumes the data is "recent enough", and does nothing.
            // By default the timespan is 12 hours, and for production apps, this is a good
            // number.  For this example though, it's set to a timespan of zero, so that
            // changes in the console will always show up immediately.
            System.Threading.Tasks.Task fetchTask = Firebase.RemoteConfig.FirebaseRemoteConfig.DefaultInstance.FetchAsync(
                TimeSpan.Zero);
            return fetchTask.ContinueWith(FetchComplete);
        }

        void FetchComplete(Task fetchTask)
        {
            if (fetchTask.IsCanceled)
            {
                Debug.Log("==> Fetch canceled. <==");
            }
            else if (fetchTask.IsFaulted)
            {
                Debug.Log("==> Fetch encountered an error <==");
            }
            else if (fetchTask.IsCompleted)
            {
                Debug.Log("==> Fetch completed successfully! <==");
            }

            var info = Firebase.RemoteConfig.FirebaseRemoteConfig.DefaultInstance.Info;
            switch (info.LastFetchStatus)
            {
                case Firebase.RemoteConfig.LastFetchStatus.Success:
                    Firebase.RemoteConfig.FirebaseRemoteConfig.DefaultInstance.ActivateAsync();
                    _isFetchDone = true;

                    _keyConfigs = FirebaseRemoteConfig.DefaultInstance.AllValues.Keys.ToList();
                    Debug.Log(String.Format("==> Remote data loaded and ready (last fetch time {0}).<==",
                        info.FetchTime));

                    break;
                case Firebase.RemoteConfig.LastFetchStatus.Failure:
                    switch (info.LastFetchFailureReason)
                    {
                        case Firebase.RemoteConfig.FetchFailureReason.Error:
                            Debug.Log("==> Fetch failed for unknown reason <==");
                            break;
                        case Firebase.RemoteConfig.FetchFailureReason.Throttled:
                            Debug.Log("==> Fetch throttled until " + info.ThrottledEndTime+" <==");
                            break;
                    }
                    break;
                case Firebase.RemoteConfig.LastFetchStatus.Pending:
                    Debug.Log("==> Latest Fetch call still pending. <==");
                    break;
            }
        }

        #region Firebase Logevent

        public string Checker(string str)
        {

            string newstr = null;
            var regexItem = new Regex("[^a-zA-Z0-9_.]+");
            if (regexItem.IsMatch(str[str.Length - 1].ToString()))
            {
                newstr = str.Remove(str.Length - 1);
            }
            string replacestr = Regex.Replace(newstr, "[^a-zA-Z0-9_]+", "_");
            return replacestr;
        }

        public void LogEventWithOneParam(string eventName)
        {
            Debug.Log("==> LogEvent " + eventName+" <==");
            _= this.LogEventWithParameter(eventName, new Hashtable() { { "value", 1 } });

        }

        /// <summary>
        /// Wait to log event to firebase analytics!
        /// </summary>
        /// <param name="event_name">name of event</param>
        /// <param name="hash">A hash table which contain value and parameter</param> 
        public async Task LogEventWithParameter(string event_name, Hashtable hash)
        {
            double countTime = 0;
            while (!_isFetchDone && countTime < 360000f)
            {
                countTime += 1000;
                await Task.Delay(1000);
            }

            if (countTime >= 360000f)
            {
                Debug.LogError(string.Format("==>Logevent {0} fail, becuz time out! Check your network please!<==", event_name));
                return;
            }

            Firebase.Analytics.Parameter[] parameter = new Firebase.Analytics.Parameter[hash.Count];
            //List<Firebase.Analytics.Parameter> parameters = new List<Firebase.Analytics.Parameter>();
            if (hash != null && hash.Count > 0)
            {
                int i = 0;
                foreach (DictionaryEntry item in hash)
                {
                    if (item.Equals((DictionaryEntry)default)) continue;
                    string key = this.Checker(item.Key.ToString());
                    string value = this.Checker(item.Value.ToString());

                    parameter[i] = (new Firebase.Analytics.Parameter(key, value));
                    Debug.Log("==> LogEvent " + event_name.ToString() + "- Key = " + key + " -  Value =" + value + " <==");
                    i++;
                }

                Firebase.Analytics.FirebaseAnalytics.LogEvent(
                           event_name,
                           parameter);
            }
        }


        #endregion

        #region FIREBASE CUSTOM EVENT

        /// <summary>
        ///   state: Trạng thái của level sau khi người chơi chơi qua
        /// </summary>
        public void LogEventLevel(int level, LEVEL_STATE_EVENT state)
        {
            _= this.LogEventWithParameter(state.ToString(), new Hashtable()
            {
                {"id_level", level}
            });

            if (string.IsNullOrEmpty(_adjsutLevelAchived))
                return;
#if NOT_ADJUST
#else
            if (state == LEVEL_STATE_EVENT.win_level)
            {
                AdjustEvent launchApp = new AdjustEvent(_adjsutLevelAchived);
                Adjust.trackEvent(launchApp);
            }
#endif
        }

        ///<param name="name">tên button</param>
        ///<param name="screen">vị trí màn hình của user</param>
        ///<param name="level">level hiện tại (nếu trong gameplay) hoặc đã pass (nếu ngoài gameplay) của user</param>
        ///<param name="customParam">Hậu tố nếu cần thêm</param>
        /// <summary>
        /// Log event when user click a button
        /// <code>
        ///  name: "tên button"
        ///  screen: "vị trí màn hình của user",
        ///  level: "level hiện tại (nếu trong gameplay) hoặc đã pass (nếu ngoài gameplay) của user"
        ///  customParam: "Hậu tố nếu cần thêm"
        /// </code>
        /// <example>
        /// For example:
        /// <code>
        ///     - add_new_melee_gameplay_4 : user thêm unit melee trong gameplay tại level 4
        ///     - claim_x2_speed_gameplay_15 : user click x2 speed trong gameplay tại level 15
        /// </code> 
        /// </example>
        /// </summary>
        public void LogClickBtnEvent(string name, string screen, int level = -1, string customParam = "")
        {
            _ = this.LogEventWithParameter("btn_click", new Hashtable()
            {
                {"id_click",string.Format("{0}_{1}",name, screen) + (level < 0 ?"":"_"+level) + (string.IsNullOrWhiteSpace(customParam)?"":"_"+customParam )}
            });
        }


        ///<param name="name">tên button</param>
        ///<param name="screen">vị trí màn hình của user</param>
        ///<param name="level">level hiện tại (nếu trong gameplay) hoặc đã pass (nếu ngoài gameplay) của user</param>
        ///<param name="customParam">Hậu tố nếu cần thêm</param>
        /// <summary>
        /// Log event when user click button AD
        /// <code>
        ///  name: "tên button"
        ///  screen: "vị trí màn hình của user",
        ///  level: "level hiện tại (nếu trong gameplay) hoặc đã pass (nếu ngoài gameplay) của user"
        ///  customParam: "Hậu tố nếu cần thêm"
        /// </code>
        /// <example>
        /// For example:
        /// <code>
        ///     - add_new_melee_gameplay_4 : user xem ad reward thêm unit melee trong gameplay tại level 4
        ///     - claim_x2_speed_gameplay_15 : user xem ad reward x2 speed trong gameplay tại level 15
        /// </code> 
        /// </example>
        /// </summary>
        public void LogClickRewardBtnEvent(string name, string screen, int level= -1, string customParam = "")
        {
            _ = this.LogEventWithParameter("reward_ad_on_click", new Hashtable()
            {
                 {"id_click",string.Format("{0}_{1}",name, screen) + (level < 0 ?"":"_"+level) + (string.IsNullOrWhiteSpace(customParam)?"":"_"+customParam )}
            });
        }

        public void LogADEvent(AD_TYPE adType, AD_STATE adState)
        {
            _ = this.LogEventWithParameter("ad_event", new Hashtable()
            {
                 {"ad_load_stats",string.Format( "ad_{0}_{1}",adType.ToString(), adState.ToString() )}
            });
        }


        public void LogADResumeEvent( AD_STATE adState)
        {
            AD_TYPE adType = this._adTypeLoaded;
              
            if (adState == AD_STATE.show)
            {
                if (adTypeShow == AD_TYPE.open)
                    adState = AD_STATE.show_open;
                else
                    adState = AD_STATE.show_resume;


                this._adTypeLoaded = AD_TYPE.resume;
                adTypeShow = AD_TYPE.resume;
            }

            if (adState == AD_STATE.show_fail)
            {
                if (adTypeShow == AD_TYPE.open)
                    adState = AD_STATE.show_open_fail;
                else
                    adState = AD_STATE.show_resume_fail;

                this._adTypeLoaded = AD_TYPE.resume;
                adTypeShow = AD_TYPE.resume;
            }

            LogADEvent(adType,adState); 
        }


        public void LogEventClickAds(AD_TYPE ad_type, string adNetwork)
        {
            _ = this.LogEventWithParameter("ad_event", new Hashtable()
            {
                 {string.Format("ad_{0}_load_stats", adNetwork),string.Format( "ad_{0}_click", ad_type.ToString() )}
            });
        }

        public void LogAdValueAdjust(double value)
        {
            if (string.IsNullOrEmpty(_adValue))
                return;
#if NOT_ADJUST
#else
            AdjustEvent adjustEvent = new AdjustEvent(_adValue);
            adjustEvent.setRevenue(value, "USD");
            Adjust.trackEvent(adjustEvent);
#endif
        }

        #endregion

    }
}


public enum LEVEL_STATE_EVENT
{
    start_level,
    fail_level,
    win_level
}

public enum AD_TYPE
{
    open,
    resume,
    banner,
    inter,
    reward
}

public enum AD_STATE
{
    load,
    load_done,
    load_fail,
    show,
    show_fail,
    show_open,
    show_open_fail,
    show_resume,
    show_resume_fail,
}