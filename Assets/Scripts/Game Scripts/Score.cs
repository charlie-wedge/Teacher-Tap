using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Score : MonoBehaviour
{
    public TMPro.TextMeshProUGUI scoreText;
    public TMPro.TextMeshProUGUI stageText;
    public Animation stageTextAnimation;

    public int score;
    public int stage = 1;

    public int maxScore; // the max score that can be earned in the level (the 'perfect' score)
    private int numOfTilesInLevel; // set by the LevelManager script when the level starts
    public int scoreOffset; // the score to give per tile pressed if a 'perfect' press

    public LevelManager levelManager;

    public Animation feedbackTextAnimation;
    public TMPro.TextMeshProUGUI feedbackText;

    public Color[] feedbackColours; // the colour of the feedback text depending on the 'good', 'perfect' etc.

    // Start is called before the first frame update
    void Start()
    {
        score = 0;        
    }

    // Update is called once per frame
    void Update()
    {
        scoreText.text = score.ToString("n0"); // make the number nice with commas
    }

    public void ConfigVariables(int numOfTiles)
    {
        numOfTilesInLevel = numOfTiles;
        scoreOffset = Mathf.FloorToInt(maxScore / numOfTilesInLevel);
    }

    public void StartNextStage()
    {
        float delay = levelManager.GetDelay(true);
        Invoke("NextStage", delay);
    }
    
    private void NextStage()
    {
        stage++;
        //LevelManager.speed++;
        stageText.text = "Stage " + stage.ToString();
        stageTextAnimation.Play("Stage Text Jump");
    }

    public void ChangeScore(int res) // offset is either 0.5, -0.5, 1, or -1
    {
        /*
         * 0 = missed
         * 1 = bad
         * 2 = good
         * 3 = perfect
        */

        string text = "";
        float offset = 0f;

        switch (res)
        {
            case 0: // missed
                text = "Missed";
                offset = -1f;
                break;

            case 1: // bad
                text = "Bad";
                offset = -0.5f;
                break;

            case 2: // good
                text = "Good";
                offset = 0.5f;
                break;

            case 3: // perfect
                text = "Perfect";
                offset = 1f;
                break;
        }

        feedbackText.text = text;
        feedbackText.color = feedbackColours[res];
        feedbackTextAnimation.Stop();
        feedbackTextAnimation.Play("Score Feedback Text");

        score += Mathf.FloorToInt(scoreOffset * offset);
    }

}
