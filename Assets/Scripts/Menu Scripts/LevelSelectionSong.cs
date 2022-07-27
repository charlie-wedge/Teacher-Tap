using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelSelectionSong : MonoBehaviour
{

    public Image albumArtImage;
    public TMPro.TextMeshProUGUI songNameText;
    public TMPro.TextMeshProUGUI artistNameText;
    public TMPro.TextMeshProUGUI highScoreText;

    private Song thisSong;

    public void SetSong(Song song)
    {
        thisSong = song;
        albumArtImage.sprite = song.albumArt;
        songNameText.text = song.songName;
        artistNameText.text = song.songArtist;

        gameObject.name = song.songName + " Song"; // Keep the Hirerarchy neat
    }

    public string GetSongName()
    {
        return thisSong.songName;
    }

    public void ButtonPressed()
    {
        LevelManager.newLevelName = thisSong.songName;
        GameObject.FindGameObjectWithTag("Menu Manager").GetComponent<LevelSelectionScroll>().NewSongSelected();
        //transform.parent.GetComponent<LevelSelectionScroll>().NewSongSelected();
    }
}
