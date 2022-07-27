using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelManager : MonoBehaviour
{
    public AudioSource audioSource;

    public string[] songNames;

    public GameObject tile;
    public Transform tileParent;

    private int numOfBeginningTilesHeldDown = 0;
    public GameObject beginningTilesEmptyObject;
    public Animation albumArtAnimation;

    //public SongData songDataScript;
    public Score scoreScript;
    public EndScreenProgressBar endScreenProgressBarScript;

    public Animation[] endScreenAnimationComponents;
    public string[] endScreenAnimationNames;
    public GameObject endScreenEmptyObject;
    public TMPro.TextMeshProUGUI endScreenScoreText;
    public TMPro.TextMeshProUGUI endScreenArtistNameText;
    public TMPro.TextMeshProUGUI endScreenSongNameText;
    public Image endScreenAlbumArtImage;
    public RawImage endScreenBackground;

    public Image menuBackground;
    public Image menuAlbumArtOverlay;
    public Image menuAlbumArt;
    public TMPro.TextMeshProUGUI menuSongName;
    public TMPro.TextMeshProUGUI menuArtistName;



    [HideInInspector]
    public static string newLevelName; // the name of the level, this should be set before the StartLevel() function is called

    private Song songData;
    private int[] tileData;
    private float timeAtLevelStart;
    private int currentTileNum = 0;
    private bool checkForTiles = false;

    public static int speed; // the current speed of the tiles
    private int beginningSpeed = 3;
    public float delayOffset; // in seconds

    public float endLevelDelay; // the delay until the end screen elements show, from after the song has ended

    public Sprite[] briggs;
    public Sprite[] monk;
    public Sprite[] enslin;
    public Sprite[] tim;

    private Sprite[][] teacherImages; // an array of the above arrays

    private Sprite[] currentTeacherImages; // is identical to one of the above arrays, depending on the level

    private void Awake()
    {
        
    }

    // Start is called before the first frame update
    void Start()
    {
        teacherImages = new Sprite[][]
        {
            briggs, monk, enslin, tim
        };

        speed = beginningSpeed;
        songData = SongData.GetSongData(); // get the timing for the tiles
        RenderSettings.fogColor = songData.levelColour;

        menuBackground.color = songData.levelColour;
        menuAlbumArtOverlay.color = songData.levelColour;
        menuAlbumArt.sprite = songData.albumArt;
        menuSongName.text = songData.songName;
        menuArtistName.text = songData.songArtist;
    }

    private bool manualStart = false; // DUBGGING ONLY
    // Update is called once per frame
    void Update()
    {
        if (checkForTiles)
        {
            CheckTile();
        }

        if (Input.GetKeyDown("s") && !manualStart) // for debugging reasons only
        {
            manualStart = true;
            Invoke(nameof(StartLevel), 0.5f);
        }

        
    }

    public void BeginningTilePressed(bool pressed) // called from the Touch Manager script when a beginning tile has been either pressed or released (boolean)
    {
        numOfBeginningTilesHeldDown += pressed ? 1 : -1;
        if (numOfBeginningTilesHeldDown == 2) // are both beginning tiles being held down?
        {
            Invoke(nameof(StartLevel), 0.5f); // using a string literal adds maintainability, hence the use of nameof() 
        }
    }

    

    public void StartLevel()
    {
        beginningTilesEmptyObject.SetActive(false);
        albumArtAnimation.Play("Album Art to Black Circle");

        tileData = songData.tileData;
        //int firstTileTime = tileData[0];
        currentTeacherImages = teacherImages[GetTeacherImages(songData.teacher)];

        timeAtLevelStart = GetRealTime();// ((8134 / speed) + delayOffset);

        scoreScript.ConfigVariables(((tileData.Length+1)/2)-3); // +1 because computers count from zero, /2 because each tile uses two indexes, and -3 because there are three commands in the array, which are not tiles

        checkForTiles = true;

        Invoke(nameof(PlaySong), GetDelay(true));

    }

    private void PlaySong()
    {
        AudioClip audio = songData.audioClip;
        audioSource.clip = audio; // set the clip to the source in unity

        audioSource.Play(); // play the song
        print("Playing audio file");
    }

    private float GetAudioTime()
    {
        return audioSource.time * 1000;
    }
    private float GetRealTime()
    {
        return Time.timeSinceLevelLoad * 1000;
    }

    private void SpawnTile(int posIndex) // posIndex can be either 0, 1 or 2
    {
        //print("Spawning tile!");
        float[] positions = new float[] { -1, 0, 1 }; // the three columns

        GameObject tileObject = Instantiate(tile, new Vector3(positions[posIndex], tile.transform.position.y, tile.transform.position.z), tile.transform.rotation, tileParent);

        tileObject.GetComponent<TileMove>().myRow = posIndex; // tell the tile which row it's in

        int index = speed - beginningSpeed;
        if (index >= currentTeacherImages.Length) // we're at the last stage, so make the image random!
        {
            index = UnityEngine.Random.Range(0, currentTeacherImages.Length);
        }
        tileObject.transform.GetChild(0).GetComponent<SpriteRenderer>().sprite = currentTeacherImages[index]; // set the image of the tile
    }

    private void CheckTile()
    {
        float currentTime;
        if (audioSource.isPlaying) // base the timing off the audio
        {
            currentTime = GetAudioTime() + GetDelay(false);
            //print("Audio Time: " + currentTime);
        }
        else // base the timing off the real time (because the song hasn't started yet so we ofc can't base it on the audio)
        {
            currentTime = GetRealTime() - timeAtLevelStart + 123.34f; // this number could cause problems on other devices?? (The gap between the switch from real time to audio time)
            //print("Real Time: " + currentTime);
        }
   
        int tileTimeIndex = currentTileNum * 2;

        if (tileTimeIndex >= tileData.Length)
        {
            if (!audioSource.isPlaying)
            {
                checkForTiles = false;
                Invoke("EndLevel", endLevelDelay);
            }
            return;
        }

        if (tileData[tileTimeIndex] <= currentTime) // are we on or passed the next tile we're suppose to spawn??
        {
            int tilePosIndex = tileData[tileTimeIndex + 1];
            if (tilePosIndex >= 0) // it's an actual tile
            {
                SpawnTile(tilePosIndex);
            }
            else // it's a command
            {
                CheckForCommand(tilePosIndex);
            }


            NextTile();
            return;
        }
    }

    private void EndLevel()
    {
        print("Reached the end of the tile data");
        for (int i = 0; i < endScreenAnimationComponents.Length; i++) // play all the end screen animations at once, (the delays are present in the actual animation itself)
        {
            endScreenAnimationComponents[i].Play(endScreenAnimationNames[i]);
            audioSource.clip = songData.audioClip;
            audioSource.time = songData.timeAtKeyPoint / 1000;
            audioSource.Play();
        }
        endScreenEmptyObject.SetActive(true);
        endScreenScoreText.text = scoreScript.score.ToString("n0");
        endScreenArtistNameText.text = songData.songArtist;
        endScreenSongNameText.text = songData.songName;
        endScreenAlbumArtImage.sprite = songData.albumArt;
        endScreenBackground.color = songData.levelColour;
        float score = scoreScript.score;
        float maxScore = scoreScript.maxScore;
        float percentage = Mathf.Clamp01(score / maxScore);
        endScreenProgressBarScript.targetPercentage = percentage;
    }


    private void CheckForCommand(int commandNum)
    {
        switch (commandNum)
        {
            case -1:
                print("Increasing speed!");
                speed++;
                scoreScript.StartNextStage();
                break;
            default:
                Debug.LogAssertion("Unknown command in song data. Please fix this in the songData script");
                break;
        }
    }

    private void NextTile()
    {
        currentTileNum++;
        CheckTile();
    }

    public float GetDelay(bool seconds)
    {
        float res;
        if (seconds) // seconds
        {
            res = ((8134 / speed) / 1000) + delayOffset;
        }
        else // milliseconds
        {
            res = (8134 / speed) + delayOffset;
        }
        return res;
    }

    public static int GetTeacherImages(string teacherName) // static because the MenuManager also uses this function from another scene
    {
        switch (teacherName)
        {
            case "Briggs":
                return 0;
            case "Monk":
                return 1;
            case "Enslin":
                return 2;
            case "Tim":
                return 2;
            default:
                Debug.LogWarning("\"" + teacherName + "\" is not a valid teacher name. Defaulting to briggs");
                return 0;
             
        }
    }



}
