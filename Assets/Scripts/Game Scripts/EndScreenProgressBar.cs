using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EndScreenProgressBar : MonoBehaviour
{

    public RectTransform rectTransform;
    public Transform transf;

    public TMPro.TextMeshProUGUI percentageText = null;

    public int maxWidth;
    public float stepTime = 0.01f;
    public float stepOffset = 0.05f;

    public bool width = true; // do we move width-ways or height-ways?

    public float targetPercentage; // set from external scripts
    public float startingPercentage = 0f; // set from external scripts

    private float currentPercentage;

    public GameObject gameObjectToEnableAtFinish; // a gameobject to enable when the progress bar is finished moving, (optional)

    public void SetProgress() // call to start
    {
        currentPercentage = startingPercentage;
        UpdateProgress(startingPercentage);
        StartCoroutine(MoveProgressBar());
    }

    private IEnumerator MoveProgressBar()
    {
        if (targetPercentage < 0 || targetPercentage > 1 || startingPercentage < 0 || startingPercentage > 1)
        {
            Debug.LogWarning("EndScreenProgressBar script: Percentage must be between 0-1. It's currently " + targetPercentage + " and " + startingPercentage);
        }

        while (currentPercentage < targetPercentage)
        {
            currentPercentage += stepOffset;
            UpdateProgress(currentPercentage);
            yield return new WaitForSeconds(stepTime);
        }
        print("Finished moving progress bar to " + (targetPercentage*100) + "%, (lost " + ((targetPercentage*100) - (currentPercentage*100)) + "% of precision)");

        if (gameObjectToEnableAtFinish != null) // enable a separate gameobject if specified
        {
            gameObjectToEnableAtFinish.SetActive(true);
        }
    }

    private void UpdateProgress(float percentage) // percentage is basically the score
    {
        float targetProgress = percentage * maxWidth;
        Vector3 newTransfPos;
        Vector2 newRectSize;
        if (width)
        {
            newTransfPos = new Vector3((targetProgress / 2) - (maxWidth / 2), transf.localPosition.y, transf.localPosition.z);
            newRectSize = new Vector2(targetProgress, rectTransform.sizeDelta.y); ;
        }
        else
        {
            newTransfPos = new Vector3(transf.localPosition.x, (targetProgress / 2) - (maxWidth / 2), transf.localPosition.z);
            newRectSize = new Vector2(rectTransform.sizeDelta.x, targetProgress);
        }
        transf.localPosition = newTransfPos;
        rectTransform.sizeDelta = newRectSize;

        if (percentageText != null)
        {
            percentageText.text = (Mathf.Floor(percentage * 1000) / 10).ToString() + "%";
        }
        
    }

}
