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
        AdManager.Instant.ShowNativeAsync(1, (nativePanel) =>
        {
            nativePanel.transform.SetParent(_nativeAdFullPos);

            nativePanel.transform.localScale = Vector3.one;
            nativePanel.transform.localPosition = Vector3.zero;
            nativePanel.rectTransform.sizeDelta = Vector2.zero;

            nativePanel.rectTransform.anchorMax = new Vector2(1, 1);
        });

        AdManager.Instant.ShowNativeAsync(2, (nativePanel) =>
        {
            nativePanel.transform.SetParent(_nativeAdApart1);

            nativePanel.transform.localScale = Vector3.one;
            nativePanel.transform.localPosition = Vector3.zero;
            nativePanel.rectTransform.sizeDelta = Vector2.zero;

            nativePanel.rectTransform.anchorMax = new Vector2(1, 0.4f);
        });

        AdManager.Instant.ShowNativeAsync(3, (nativePanel) =>
        {
            nativePanel.transform.SetParent(_nativeAdApart2);

            nativePanel.transform.localScale = Vector3.one;
            nativePanel.transform.localPosition = Vector3.zero;
            nativePanel.rectTransform.sizeDelta = Vector2.zero;

            nativePanel.rectTransform.anchorMax = new Vector2(1, 1f);

            nativePanel.rectTransform.anchorMin = new Vector2(0, 0.6f);
        });

        AdManager.Instant.ShowNativeAsync(4, (nativePanel) =>
        {
            nativePanel.transform.SetParent(_nativeAdOnScroll1);

            nativePanel.transform.localScale = Vector3.one;
            nativePanel.transform.localPosition = Vector3.zero;
            nativePanel.rectTransform.sizeDelta = Vector2.zero;

            nativePanel.rectTransform.anchorMax = new Vector2(1, 1);
        });

        AdManager.Instant.ShowNativeAsync(5, (nativePanel) =>
        {
            nativePanel.transform.SetParent(_nativeAdOnScroll2);

            nativePanel.transform.localScale = Vector3.one;
            nativePanel.transform.localPosition = Vector3.zero;
            nativePanel.rectTransform.sizeDelta = Vector2.zero;

            nativePanel.rectTransform.anchorMax = new Vector2(1, 1);
        });

        AdManager.Instant.ShowNativeAsync(6, (nativePanel) =>
        {
            nativePanel.transform.SetParent(_nativeAdOnScroll3);

            nativePanel.transform.localScale = Vector3.one;
            nativePanel.transform.localPosition = Vector3.zero;
            nativePanel.rectTransform.sizeDelta = Vector2.zero;

            nativePanel.rectTransform.anchorMax = new Vector2(1, 1);
        });

        AdManager.Instant.ShowNativeAsync(7, (nativePanel) =>
        {
            nativePanel.transform.SetParent(_nativeAdOnScroll4);

            nativePanel.transform.localScale = Vector3.one;
            nativePanel.transform.localPosition = Vector3.zero;
            nativePanel.rectTransform.sizeDelta = Vector2.zero;

            nativePanel.rectTransform.anchorMax = new Vector2(1, 1);
        });

        AdManager.Instant.ShowNativeAsync(8, (nativePanel) =>
        {
            nativePanel.transform.SetParent(_nativeAdOnScroll5);

            nativePanel.transform.localScale = Vector3.one;
            nativePanel.transform.localPosition = Vector3.zero;
            nativePanel.rectTransform.sizeDelta = Vector2.zero;

            nativePanel.rectTransform.anchorMax = new Vector2(1, 1);
        });

       
    }
}
