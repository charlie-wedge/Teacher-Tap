using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour
{
    public AudioSource audioSource;

    public string[] songNames;
    public AudioClip[] songClips;

    public GameObject tile;
    public Transform tileParent;

    public SongData songDataScript;

    [HideInInspector]
    public string newLevelName; // the name of the level, this should be set before the StartLevel() function is called

    private int[] tileData;
    private bool levelIsActive = false;
    private float timeAtLevelStart;
    private int currentTileNum = 0;

    public static int speed = 3; // the current speed of the tiles
    public float delayOffset; // in seconds

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (!levelIsActive) return;

        float currentTime = GetTime() - timeAtLevelStart; // the time since this level started

        if (tileData[currentTileNum*2] <= currentTime) // are we on or passed the next tile we're suppose to spawn??
        {
            int tileIndex = tileData[(currentTileNum * 2) + 1];
            print(tileIndex);
            SpawnTile(tileIndex);

            NextTile();
        }
    }

    public void StartLevel()
    {
        Invoke("PlaySong", ((8134 / speed) / 1000) + delayOffset);

        tileData = songDataScript.GetTileData(newLevelName); // get the timing for the tiles
        timeAtLevelStart = GetTime();
        levelIsActive = true;

    }

    private void PlaySong()
    {
        AudioClip audio = songClips[Array.IndexOf(songNames, newLevelName)]; // get the song clip
        audioSource.clip = audio; // set the clip to the source in unity

        audioSource.Play(); // play the song
        print("Playing audio file");
    }

    private float GetTime()
    {
        return Time.timeSinceLevelLoad * 1000;
    }

    private void SpawnTile(int posIndex) // posIndex can be either 0, 1 or 2
    {
        float[] positions = new float[] { -1, 0, 1 }; // the three columns

        GameObject tileObject = Instantiate(tile, new Vector3(positions[posIndex], tile.transform.position.y, tile.transform.position.z), tile.transform.rotation, tileParent);
    }

    private void CheckTile()
    {
        if (currentTileNum * 2 >= tileData.Length) // check if the song is finished (we have cleared the tileData array)
        {
            print("Song complete!");
            levelIsActive = false;
            return;
        }
        CheckForCommand();
    }


    private void CheckForCommand()
    {
        if (tileData[currentTileNum * 2] < 0) // is it a command?
        {
            switch (tileData[currentTileNum * 2])
            {
                case -1:
                    print("Increasing speed!");
                    speed++;
                    break;
                default:
                    Debug.LogAssertion("Unkown command in song data. Please fix this in the songData script");
                    break;
            }
            NextTile();
        }
    }

    private void NextTile()
    {
        currentTileNum++;
        CheckTile();
    }
}
