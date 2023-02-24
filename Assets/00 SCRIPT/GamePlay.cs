using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DVAH;
using static Facebook.Unity.FB;

public class GamePlay : DVAH.Singleton<GamePlay>
{
    [SerializeField]
    Transform _nativeAdFullPos,
        _nativeAdApart1, _nativeAdApart2,
        _nativeAdOnScroll1, _nativeAdOnScroll2, _nativeAdOnScroll3, _nativeAdOnScroll4,
        _nativeAdOnScroll5;
    // Start is called before the first frame update
    void Start()
    {
        AssignNativeAdToPosition();
    }

    void AssignNativeAdToPosition()
    {
        _ = AdManager.Instant.ShowNative(1, (nativePanel) =>
        {
            nativePanel.transform.SetParent(_nativeAdFullPos);

            nativePanel.transform.localScale = Vector3.one;
            nativePanel.transform.localPosition = Vector3.zero;
            nativePanel.rectTransform.sizeDelta = Vector2.zero;

            nativePanel.rectTransform.anchorMax = new Vector2(1, 1);
        });

        _ = AdManager.Instant.ShowNative(2, (nativePanel) =>
        {
            nativePanel.transform.SetParent(_nativeAdApart1);

            nativePanel.transform.localScale = Vector3.one;
            nativePanel.transform.localPosition = Vector3.zero;
            nativePanel.rectTransform.sizeDelta = Vector2.zero;

            nativePanel.rectTransform.anchorMax = new Vector2(1, 0.4f);
        });

        _ = AdManager.Instant.ShowNative(3, (nativePanel) =>
        {
            nativePanel.transform.SetParent(_nativeAdApart2);

            nativePanel.transform.localScale = Vector3.one;
            nativePanel.transform.localPosition = Vector3.zero;
            nativePanel.rectTransform.sizeDelta = Vector2.zero;

            nativePanel.rectTransform.anchorMax = new Vector2(1, 1f);

            nativePanel.rectTransform.anchorMin = new Vector2(0, 0.6f);
        });

        _ = AdManager.Instant.ShowNative(4, (nativePanel) =>
        {
            nativePanel.transform.SetParent(_nativeAdOnScroll1);

            nativePanel.transform.localScale = Vector3.one;
            nativePanel.transform.localPosition = Vector3.zero;
            nativePanel.rectTransform.sizeDelta = Vector2.zero;

            nativePanel.rectTransform.anchorMax = new Vector2(1, 1);
        });

        _ = AdManager.Instant.ShowNative(5, (nativePanel) =>
        {
            nativePanel.transform.SetParent(_nativeAdOnScroll2);

            nativePanel.transform.localScale = Vector3.one;
            nativePanel.transform.localPosition = Vector3.zero;
            nativePanel.rectTransform.sizeDelta = Vector2.zero;

            nativePanel.rectTransform.anchorMax = new Vector2(1, 1);
        });

        _ = AdManager.Instant.ShowNative(6, (nativePanel) =>
        {
            nativePanel.transform.SetParent(_nativeAdOnScroll3);

            nativePanel.transform.localScale = Vector3.one;
            nativePanel.transform.localPosition = Vector3.zero;
            nativePanel.rectTransform.sizeDelta = Vector2.zero;

            nativePanel.rectTransform.anchorMax = new Vector2(1, 1);
        });

        _ = AdManager.Instant.ShowNative(7, (nativePanel) =>
        {
            nativePanel.transform.SetParent(_nativeAdOnScroll4);

            nativePanel.transform.localScale = Vector3.one;
            nativePanel.transform.localPosition = Vector3.zero;
            nativePanel.rectTransform.sizeDelta = Vector2.zero;

            nativePanel.rectTransform.anchorMax = new Vector2(1, 1);
        });

        _ = AdManager.Instant.ShowNative(8, (nativePanel) =>
        {
            nativePanel.transform.SetParent(_nativeAdOnScroll5);

            nativePanel.transform.localScale = Vector3.one;
            nativePanel.transform.localPosition = Vector3.zero;
            nativePanel.rectTransform.sizeDelta = Vector2.zero;

            nativePanel.rectTransform.anchorMax = new Vector2(1, 1);
        });

       
    }
}
