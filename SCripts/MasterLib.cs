using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System;

namespace HuynnLib
{
    public class MasterLib : MonoBehaviour
    {

        Huynn3rdLib huynn3RdLib;
     
        bool _isInitByOrder = false;
 

        [SerializeField]
        List<GameObject> _doneLib = new List<GameObject>(); //Runtime check

        private void Awake()
        {
            huynn3RdLib = this.GetComponentInParent<Huynn3rdLib>();
            if (!huynn3RdLib.isAutoInit)
                return;

            InitChildLib(() => { Debug.Log("=====> Init done all! <====="); });


        }

        public void InitChildLib(Action onAllInitDone = null)
        {
            
            if (_isInitByOrder)
            {
                Queue<IChildLib> orderInit = new Queue<IChildLib>();
                

                for (int i = 0; i < huynn3RdLib.ChildLibs.Count; i++)
                {
                    orderInit.Enqueue(huynn3RdLib.ChildLibs[i].GetComponent<IChildLib>());
                }

                Action<IChildLib> onInitDone = null;

                onInitDone = (childLib) =>
                {

                    childLib.Init(() =>
                    {
                        if (orderInit.Count != 0)
                            onInitDone.Invoke(orderInit.Dequeue());
                        else
                            onAllInitDone?.Invoke();
                    });
                };

                onInitDone.Invoke(orderInit.Dequeue());


                return;
            }


            for (int i = 0; i < huynn3RdLib.ChildLibs.Count; i++)
            {
                GameObject g = huynn3RdLib.ChildLibs[i].gameObject;
                try
                {
                    huynn3RdLib.ChildLibs[i].GetComponent<IChildLib>()?.Init(() =>
                    {
                        _doneLib.Add(g);
                    });
                }
                catch (Exception e)
                {
                    Debug.LogError(string.Format("==> Init child lib {0} error: {1} <==", g.name, e.ToString()));
                }

            }
            StartCoroutine(WaitAllLibInitDone(_doneLib, onAllInitDone));

        }

        IEnumerator WaitAllLibInitDone(List<GameObject> doneLib, Action onAllInitDone)
        {
            yield return new WaitUntil(() => doneLib.Count == huynn3RdLib.ChildLibs.Count);
            onAllInitDone?.Invoke();
        }
    
    }


    public interface IChildLib
    {
        public void Init(Action onInitDone = null);
    }
}
