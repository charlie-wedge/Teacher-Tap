using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

// This script manages the main menu of the game. It holds the public functions for the buttons, and ensures the correct song plays in the game.

public class MenuManager : MonoBehaviour
{
    private Song songData;

    public Image background;
    public Image teacherImageOverlay; // should be set to the same colour as background
    public Image teacherImage; // the teacher image gameobject
    public TMPro.TextMeshProUGUI teacherNameText; // the name of the teacher
    public Image levelCounterBackgroundColour; // should be a lighter colour than the background
    public Image levelCounterProgressColour; // should be a darker colour than the background
    public Sprite[] teacherImagesToUse; // the teacher image to use as the icon

    public Image albumArt;
    public TMPro.TextMeshProUGUI songNameText;
    public TMPro.TextMeshProUGUI songArtistText;
    public TMPro.TextMeshProUGUI highScoreText;

    public EndScreenProgressBar teacherLevelProgressScript;

    public AudioSource audioSource;

    public Animation[] playAnimations;
    public Animation mainMenuAnimationComponent;

    private List<Song> levels;
    public GameObject songSelectionEmptyObject;
    public Transform songSelectionParent;
    public GameObject songSelectionSongPrefab;
    public float levelObjectOffsetY = 140f + 20f; // public so it can be edited within the Unity Editor

    public LevelSelectionScroll scrollScript;
    public bool inMainMenu = true;

    Coroutine loadGameSceneCoroutine;




    // Start is called before the first frame update
    void Start()
    {
        if (LevelManager.newLevelName == null)
        {
            LevelManager.newLevelName = "Crush"; // default song
        }

        ConfigMainMenu();
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void ConfigMainMenu() // set up the main menu based on the level
    {
        songData = SongData.GetSongData();

        Color levelColour = songData.levelColour;
        background.color = levelColour; // background colour
        teacherImage.sprite = teacherImagesToUse[LevelManager.GetTeacherImages(songData.teacher)]; // teacher icon
        teacherImageOverlay.color = levelColour; // to make the teacher cicle
        teacherNameText.text = songData.teacher; // teacher name
        float lighterOffset = 1.1f;
        levelCounterBackgroundColour.color = new Color(levelColour.r * lighterOffset, levelColour.g * lighterOffset, levelColour.b * lighterOffset);
        float darkerOffset = 0.9f;
        levelCounterProgressColour.color = new Color(levelColour.r * darkerOffset, levelColour.g * darkerOffset, levelColour.b * darkerOffset);

        albumArt.sprite = songData.albumArt;
        songNameText.text = songData.songName;
        songArtistText.text = songData.songArtist;

        audioSource.clip = songData.audioClip;
        audioSource.time = songData.timeAtKeyPoint / 1000;
        audioSource.Play();

        teacherLevelProgressScript.SetProgress();

    }

    public void PlayButtonPressed() // the user wants to play the level
    {
        print("Play button pressed!");
        foreach (Animation animation in playAnimations) // animations to hide the menu
        {
            animation.Play();
        }
        loadGameSceneCoroutine = StartCoroutine(StartLoadingGame()); // start loading the game scene
    }
    private IEnumerator StartLoadingGame()
    {
        print("Loading Game Scene");
        yield return new WaitForSeconds(0.5f); // initital delay

        // start loading the game scene in the background
        AsyncOperation asyncLoad = SceneManager.LoadSceneAsync(1); // Game Scene
        asyncLoad.allowSceneActivation = false; // don't load automatically

        while (true) // wait until the scene is loaded
        {
            //print(asyncLoad.progress);
            if (asyncLoad.progress >= 0.9f) // if it has loaded..
            {
                GameSceneLoaded(asyncLoad);
                StopCoroutine(loadGameSceneCoroutine);
            }
            yield return null;
            
        }
    }
    private void GameSceneLoaded(AsyncOperation asyncLoad) // load the game scene
    {
        print("Loaded Game Scene");
        /*
        foreach (Animation animation in toGameSceneAnimations)
        {
            animation.Play();
        }
        */
        asyncLoad.allowSceneActivation = true; // actually load the thing in for real now
    }


    public void AllSongsButtonPressed() // hide the main menu and go to the song selection menu, public so a button can call it
    {
        print("All Songs button pressed!");
        if (!songSelectionEmptyObject.activeSelf) // if this menu hasn't yet been created, then create it!
        {
            songSelectionEmptyObject.SetActive(true);
            levels = SongData.GetAllSongs(); // levels is a global variable
            float currentPosY = 0f;
            foreach (Song level in levels) // for every possible song...
            {
                // get the UI object for the level selection
                GameObject levelObject = Instantiate(songSelectionSongPrefab, songSelectionSongPrefab.transform.position, songSelectionSongPrefab.transform.rotation, songSelectionParent);
                // set its position to be under the last
                levelObject.transform.localPosition = new Vector3(songSelectionSongPrefab.transform.position.x, songSelectionSongPrefab.transform.position.y + currentPosY, songSelectionSongPrefab.transform.position.z);
                // set up the UI to match that of the song
                levelObject.GetComponent<LevelSelectionSong>().SetSong(level);
                currentPosY -= levelObjectOffsetY; // update the offset
            }
        }
        mainMenuAnimationComponent.Play("Main Menu to Song Selection");
        inMainMenu = false;



    }

    public void NewSongSelected() // the user has selected a new song in the song selection menu. Called from another script, hence why public
    {
        if (!scrollScript.moved) // only do the press if the user isn't scrolling
        {
            ConfigMainMenu();
            ToMainMenu();
            print(SongData.GetSongData().songName + " has been selected!");
        }

    }

    public void ToMainMenu() // also called from the go back button via the Song Selection Menu
    {
        mainMenuAnimationComponent.Play("Song Selection to Main Menu");
        inMainMenu = true;
    }

       
}
