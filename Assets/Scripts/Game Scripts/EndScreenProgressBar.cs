using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

// this function makes smooth progress bars when passed in an input. It does this by changing the width of a UI element in a linear format. It's used on the end screen, and main menu for the teacher's XP levels.

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

    private IEnumerator MoveProgressBar() // move the progress bar
    {
        if (targetPercentage < 0 || targetPercentage > 1 || startingPercentage < 0 || startingPercentage > 1) // boundary checks
        {
            Debug.LogWarning("EndScreenProgressBar script: Percentage must be between 0-1. It's currently " + targetPercentage + " and " + startingPercentage);
        }

        while (currentPercentage < targetPercentage) // while we still need to move the progress bar...
        {
            currentPercentage += stepOffset; // increment the progress bar
            UpdateProgress(currentPercentage); // update the UI
            yield return new WaitForSeconds(stepTime); // wait a delay until we increment again
        }
        print("Finished moving progress bar to " + (targetPercentage*100) + "%, (lost " + ((targetPercentage*100) - (currentPercentage*100)) + "% of precision)");

        if (gameObjectToEnableAtFinish != null) // enable a separate gameobject if specified
        {
            gameObjectToEnableAtFinish.SetActive(true);
        }
    }

    // update the UI
    private void UpdateProgress(float percentage) // percentage is basically the score
    {
        float targetProgress = percentage * maxWidth;
        Vector3 newTransfPos;
        Vector2 newRectSize;
        if (width) // if the progress bar is width-ways
        {
            newTransfPos = new Vector3((targetProgress / 2) - (maxWidth / 2), transf.localPosition.y, transf.localPosition.z);
            newRectSize = new Vector2(targetProgress, rectTransform.sizeDelta.y); ;
        }
        else // if the progress bar is height-ways
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
