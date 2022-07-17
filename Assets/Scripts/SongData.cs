using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SongData : MonoBehaviour
{
    private Dictionary<string, Song> levels;

    public Color crushColor;
    public AudioClip crushClip;
    public Sprite crushArt;

    // Start is called before the first frame update
    void Start()
    {
        levels = new Dictionary<string, Song>();

        levels["crush"] = new Song
        {
            audioClip = crushClip,
            timeAtKeyPoint = 57554,
            songName = "Crush",
            songArtist = "Tessa Violet",
            albumArt = crushArt,
            levelColour = crushColor,
            tileData = new int[]
            {
                2283, 0,
                2478, 2,
                2700, 0,

                4105, 2,
                4471, 0,
                4730, 2,

                5840, 0,
                6000, 2,
                6240, 0,

                7520, 2,
                8000, 0,
                8200, 2,

                9360, 0,
                9520, 2,
                9760, 0,

                11000, 2,
                11440, 0,
                11600, 2,

                12880, 0,
                13080, 2,
                13280, 0,

                14600, 2,
                15000, 0,
                15200, 2,

                16400, 2,
                16600, 1,
                16840, 0,

                18160, 0,
                18600, 1,
                18760, 2,

                20000, 2,
                20160, 1,
                20360, 0,

                21680, 0,
                22080, 1,
                22280, 0,

                23480, 0,
                23680, 1,
                23920, 2,

                25240, 2,

                27000, 2,
                27240, 1,
                27440, 0,

                29480, 0,
                29640, 2,

                // REPEAT

                30080, -1,

                30520, 0,
                30720, 2,
                30960, 0,

                32320, 1,
                32800, 0,
                32960, 2,

                34040, 0,
                34320, 2,
                34520, 0,

                35800, 1,
                36240, 0,
                36440, 2,

                37575, 0,
                37800, 2,
                38000, 0,

                39329, 1,
                39784, 0,
                40000, 2,

                41110, 0,
                41360, 2,
                41560, 0,

                42880, 1,
                43200, 0,
                43400, 2,

                44640, 0,
                44840, 2,
                45040, 0,

                46440, 0,
                46525, 2,

                46880, 0,
                46975, 2,

                47709, 1,
                48160, 0,
                48400, 2,
                48600, 0,

                49929, 1,
                50360, 0,
                50560, 2,

                51692, 0,
                51898, 2,
                52133, 0,

                53430, 0,
                53584, 2,

                54984, 1,
                55213, 0,
                55468, 2,
                55665, 0,

                56990, 1,

                // CHORUS START

                57520, -1,

                58720, 0,
                58720, 2,
                59219, 1,

                59633, 0,
                59855, 1,
                60071, 2,
                60295, 1,
                60525, 0,

                60940, 0,
                60940, 2,

                61394, 0,
                61627, 1,
                61827, 2,
                62070, 1,
                62313, 0,
                62502, 1,
                62675, 2,
                62927, 1,
                63172, 0,
                63386, 1,
                63613, 2,
                63830, 1,
                64049, 0,
                64270, 0,

                64927, 1,
                65370, 0,
                65370, 2,

                65813, 0, // touch, touch, touch, touch, touch
                66229, 2,
                66672, 0,
                67132, 2,
                67586, 0,

                69330, 0, // crush, crush, crush, crush, crush
                69330, 2,
                69746, 0,
                69746, 2,
                70216, 0,
                70216, 2,
                70692, 0,
                70692, 2,
                71097, 0,
                71097, 2,

                71698, -1,

                72427, 0, // I got a fascination
                72650, 0,
                72857, 1,
                73303, 0,
                73303, 2,

                73750, 0, // with your presentation
                73925, 1,
                74199, 2,
                74412, 2,
                74601, 1,
                75066, 0,
                75066, 2,

                75520, 2, // making me feel like you're on my island
                75735, 1,
                75958, 0,
                76159, 1,
                76357, 2,
                76612, 1,
                76768, 0,
                77051, 1,
                77281, 2,
                77520, 1,
                77717, 0, // you're my permanent vacation
                77947, 1,
                78164, 2,
                78399, 1,
                78575, 0,
                78802, 1,
                79041, 1,
                79484, 0,
                79484, 2,

                79900, 0, // touch, touch, touch, touch, touch
                80340, 2,
                80773, 0,
                81232, 2,
                81675, 0,

                82571, 2, // I could be your
                82797, 1,
                83014, 0,
                83227, 1,

                83431, 0, // crush, crush, crush, crush, crush
                83431, 2,
                83916, 0,
                83916, 2,
                84343, 0,
                84343, 2,
                84741, 0,
                84741, 2,
                85197, 0,
                85197, 2,

                86508, 0, // sorry
                86792, 2,
            },
        };
        
}


    public Song GetTileData(string songName)
    {
        return levels[songName];
    }
}

public class Song
{
    public int[] tileData;
    public AudioClip audioClip;
    public int timeAtKeyPoint;
    public string songName;
    public string songArtist;
    public Sprite albumArt;
    public Color levelColour;
}
