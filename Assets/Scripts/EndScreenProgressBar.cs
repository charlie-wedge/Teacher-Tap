using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EndScreenProgressBar : MonoBehaviour
{

    public RectTransform rectTransform;
    public Transform transf;

    public TMPro.TextMeshProUGUI percentageText;

    public int maxWidth;
    public float stepTime = 0.01f;
    public float stepOffset = 0.05f;

    public float targetPercentage; // set from external scripts (LevelManager)

    public void SetProgress() // called from external animation
    {
        StartCoroutine(MoveProgressBar());
    }

    private IEnumerator MoveProgressBar()
    {
        if (targetPercentage < 0 || targetPercentage > 1)
        {
            Debug.LogWarning("EndScreenProgressBar script: Percentage must be between 0-1. It's currently " + targetPercentage);
        }

        float currentPercentage = 0f;
        while (currentPercentage < targetPercentage)
        {
            currentPercentage += stepOffset;
            UpdateProgress(currentPercentage);
            yield return new WaitForSeconds(stepTime);
        }
        print("Finished moving progress bar to " + targetPercentage + "%, (lost " + (targetPercentage - currentPercentage) + "% of precision)");
    }

    private void UpdateProgress(float percentage) // percentage is basically the score
    {
        float targetProgress = percentage * maxWidth;
        transf.localPosition = new Vector3((targetProgress / 2) - (maxWidth / 2), transf.localPosition.y, transf.localPosition.z);
        rectTransform.sizeDelta = new Vector2(targetProgress, rectTransform.sizeDelta.y);

        percentageText.text = Mathf.Floor(percentage*100).ToString() + "%";
    }

}
