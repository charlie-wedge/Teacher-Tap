using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SongData : MonoBehaviour
{
    public static bool alreadyInstance = false; // don't destroy on load stuff

    public static Dictionary<string, Song> levels;

    public Color crushColour;
    public AudioClip crushClip;
    public Sprite crushArt;

    public Color theFoxColour;
    public AudioClip theFoxClip;
    public Sprite theFoxArt;


    private void Awake() // Don't destroy on load stuff
    {
        if (alreadyInstance)
        {
            Destroy(gameObject);
        }
        else
        {
            DontDestroyOnLoad(gameObject);
            alreadyInstance = true;
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        levels = new Dictionary<string, Song>();

        levels["Crush"] = new Song
        {
            audioClip = crushClip,
            timeAtKeyPoint = 57554,
            songName = "Crush",
            songArtist = "Tessa Violet",
            albumArt = crushArt,
            levelColour = crushColour,
            teacher = "Briggs",
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

        levels["The Fox"] = new Song
        {
            audioClip = theFoxClip,
            timeAtKeyPoint = 0,
            songName = "The Fox",
            songArtist = "Ylvis",
            albumArt = theFoxArt,
            levelColour = theFoxColour,
            teacher = "Enslin",
            tileData = new int[]
            {
                0, 1,
                1880, 1,
                3720, 1,

                8400, 0, // Dog goes woof
                8880, 2,
                9360, 0,

                10245, 2, // Cat goes meow
                10748, 0,
                11200, 2,

                12157, 0, // Bird goes tweet
                12615, 1,
                13073, 2,

                13591, 1, // And mouse goes squeek
                14045, 2,
                14523, 1,
                14960, 0,

                15902, 0, // Cow goes moo
                16390, 2,
                16858, 0,

                17800, 2, // Frog goes croak
                18213, 0,
                18720, 2,

                19896, 1, // And the elephant goes toot
                20364, 0,
                20827, 1,
                21240, 2,
                21733, 1,
                22201, 1,

                23406, 0, // Ducks say quack
                23849, 2,

                25288, 2, // And fish go blub
                25731, 0,
                // And the seal goes
                28809, 0, // ow, ow, ow
                28809, 2,
                29262, 0,
                29262, 2,
                29740, 0,
                29740, 2,
                // But there's
                30920, 1, // one sound
                31384, 1,
                // That
                32760, 2, // no one knows
                33256, 2,

                33753, 0,
                34256, 0,
                34720, 0,
                35200, 0,

                35780, 0, // What does the fox say?
                36034, 1,
                36308, 2,
                36502, 1,
                36961, 0,
                36961, 2,

                37360, -1,

                37465, 1, // Ring-ding-ding-ding-dingeringeding
                37963, 1,
                38431, 1,
                38800, 1,
                39123, 1,

                39501, 0, // Gering-ding-ding-ding-dingeringeding
                39834, 0,
                40308, 0,
                40600, 0,
                40950, 0,

                41229, 1, // Gering-ding-ding-ding-dingeringeding
                41712, 1,
                42175, 1,
                42520, 1,
                42872, 1,

                43459, 0, // What the fox say?
                43800, 2,
                44037, 1,
                44440, 0,
                44440, 2,

                44955, 0, // Wa-pa-pa-pa-pa-pa-pow
                45463, 2,
                45926, 0,
                46160, 2,
                46320, 0,

                47107, 0, // Wa-pa-pa-pa-pa-pow
                47540, 1,
                47804, 0,
                48018, 1,
                48200, 0,

                48735, 0, // Wa-pa-pa-pa-pa-pa-pow
                49203, 2,
                49677, 0,
                49880, 2,
                50040, 0,

                50800, 0, // What the fox say?
                51300, 2,
                51524, 1,
                51868, 0,
                51868, 2,

                52485, 0, // Hatee-hatee-hatee-ho
                52485, 2,
                52959, 0,
                52959, 2,
                53407, 0,
                53407, 2,
                53815, 1,

                54353, 0, // Hatee-hatee-hatee-ho
                54353, 2,
                54821, 0,
                54821, 2,
                55294, 0,
                55294, 2,
                55663, 1,

                56240, 0, // Hatee-hatee-hatee-ho
                56240, 2,
                56729, 0,
                56729, 2,
                57172, 0,
                57172, 2,
                57560, 1,

                58362, 0, // What the fox say?
                58800, 2,
                59054, 1,
                59520, 0,
                59520, 2,

                59936, 0, // Joff-tchoffo-tchoff-tchoffo-tchoffo-tchoff
                60185, 1,
                60439, 0,
                60688, 1,
                60937, 0,
                61058, 1,
                61257, 0,
                61615, 1,

                62069, 2, // Joff-tchoffo-tchoff-tchoffo-tchoffo-tchoff
                62328, 1,
                62567, 2,
                62800, 1,
                63025, 2,
                63154, 1,
                //63368, 2,
                63473, 2,

                63682, 0, // Joff-tchoff-tchoff-tchoff-tchoffo-tchoffo-tchoff
                63946, 1,
                64170, 0,
                64409, 1,
                64653, 0,
                64852, 1,
                65012, 0,
                //
                65350, 1,

                65923, 0, // What the fox say?
                66317, 2,
                66531, 1,
                67029, 0,
                67029, 2,

                67512, -1,

                68416, 1, // Big blue eyes,
                68880, 2,
                69360, 0,

                70287, 1, // pointy nose
                70729, 0,
                72217, 2,

                72150, 0, // Chasing mice and digging holes
                72649, 1,
                73086, 2,
                73585, 0,
                74046, 2,
                74506, 1,
                74946, 0,

                75931, 0, // Tiny paws
                76398, 1,
                76870, 2,

                77807, 1, // up the hill
                78277, 1,
                78740, 2,

                79819, 0, // Suddenly you're standing still
                80155, 2,
                80345, 0,
                80824, 1,
                81313, 2,
                81782, 0,
                82231, 2,

                83109, 1, // Your fur is red,
                83390, 2,
                83639, 0,
                83872, 1,

                84919, 1, // so beautiful
                85264, 0,
                85453, 2,
                85746, 1,

                87392, 2, // Like an angle in disguise
                87667, 1,
                87904, 0,
                88370, 1,
                89038, 2,
                89257, 1,
                89705, 0,

                90459, 2, // But if you meet
                90915, 2,
                91155, 1,
                91375, 0,

                92542, 2, // a friendly horse
                92739, 2,
                92956, 1,
                93234, 2,

                94866, 0, // Will you communicate by
                95149, 1,
                95337, 0,
                95559, 2,
                96057, 1,
                96320, 0,
                96804, 1,

                97496, 0, // Mo-o-o-o-orse?
                97872, 1,
                98219, 0,
                98542, 1,
                98904, 0,

                99341, 2, // Mo-o-o-o-orse?
                99724, 1,
                100085, 2,
                100422, 1,
                100764, 2,

                101218, 0, // Mo-o-o-o-
                101609, 1,
                101946, 0,
                102288, 1,

                102432, 2, // How

                102611, 0, // orse? & will

                102825, 2, // you speak to that
                103386, 1,
                103803, 1,
                104252, 0,
                104252, 2,

                104998, 1, // Ho-o-o-o-orse?
                104998, 2,
                105342, 1,
                105342, 2,
                105696, 1,
                105696, 2,
                106039, 1,
                106039, 2,
                106372, 1,
                106372, 2,

                106860, 0, // Ho-o-o-o-orse?
                106860, 1,
                107231, 0,
                107231, 1,
                107564, 0,
                107564, 1,
                107904, 0,
                107904, 1,
                108223, 0,
                108223, 1,

                108742, 0, // Ho-o-o-orse?
                108742, 2,
                109096, 0,
                109096, 2,
                109439, 0,
                109439, 2,
                109783, 0,
                109783, 2,
                110116, 0,
                110116, 2,

                110719, 0, // What does the fox say?
                111097, 2,
                111311, 1,
                111514, 0,
                111970, 2,

                112438, 0, // [BEAT]
                112960, 0,
                113400, 0,
                113880, 0,

                114049, 2, // The
                114320, 2, // sec-
                114320, 0, // [BEAT]
                114760, 2, // -ret
                114760, 0, // [BEAT]
                115200, 2, // of
                115292, 0, // [BEAT]
                115538, 2, // the
                115680, 0, // [BEAT]
                115976, 2, // fox
                116160, 0, // [BEAT]

                116640, 0, // [BEAT]
                117080, 0,
                117565, 0,

                118081, 2, // Anc-
                118081, 0, // [BEAT]
                118520, 2, // -ient
                118520, 0, // [BEAT]
                118825, 2, // mys-
                119000, 0, // [BEAT]
                119220, 2, // -te-
                119480, 0, // [BEAT]
                119704, 2, // -ry

                119920, 0, // [BEAT]
                120440, 0,
                120880, 0,
                121360, 0,

                121800, 2, // Some-
                121800, 0, // [BEAT]
                122280, 2, // -where
                122280, 0, // [BEAT]
                122526, 2, // deep
                122760, 0, // [BEAT]
                123003, 2, // in
                123218, 2, // the
                123218, 0, // [BEAT]
                123513, 2, // woods
                123640, 0, // [BEAT]

                124160, 0, // [BEAT]
                124640, 0,
                125080, 0,

                125381, 2, // I
                125583, 2, // know
                125583, 0, // [BEAT]
                126000, 2, // you're
                126000, 0, // [BEAT]
                126286, 2, // hi-
                126440, 0, // [BEAT]
                126740, 2, // -ding

                126960, 0, // [BEAT]
                127400, 0,
                127863, 0,
                128363, 0,
                128868, 0,

                129270, 2, // What
                129270, 0, // [BEAT]
                129760, 0, // [BEAT]
                130037, 2, // is
                130240, 0, // [BEAT]
                130447, 2, // your
                130760, 0, // [BEAT]
                130915, 2, // sound?

                131200, 0, // [BEAT]
                131680, 0,
                132120, 0,
                132618, 0,

                133040, 2, // Will
                133040, 0, // [BEAT]
                133480, 2, // we
                133480, 0, // [BEAT]
                133713, 2, // e-
                134013, 0, // [BEAT]
                134256, 2, // -ver
                134419, 0, // [BEAT]
                134713, 2, // know?

                134868, 0, // [BEAT]
                135366, 0,
                135813, 0,
                136344, 0,

                136570, 2, // Will
                136809, 2, // always
                136809, 0, // [BEAT]
                137302, 2, // be
                137302, 0, // [BEAT]
                137482, 2, // a
                137697, 2, // mys-
                137697, 0, // [BEAT]
                138009, 2, // -te-
                138200, 0, // [BEAT]
                138478, 2, // -ry?
                138574, 0, // [BEAT]

                139043, 0, // [BEAT]
                139470, 0,
                139930, 0,

                140520, 2, // What
                140520, 0, // [BEAT]
                141052, 0, // [BEAT]
                141289, 2, // do
                141511, 0, // [BEAT]
                141759, 2, // you
                141920, 0, // [BEAT]
                142197, 2, // say?

                142437, -1,

                142437, 0, // [BEAT]
                142437, 2,
                142880, 0,
                142880, 2,
                143320, 0,
                143320, 2,
                143800, 0,
                143800, 2,
                144360, 0,
                144360, 2,
                144720, 0,
                144720, 2,
                145200, 0,
                145200, 2,
                145600, 0,
                145600, 2,
                146120, 0,
                146120, 2,
                146560, 0,
                146560, 2,
                147040, 0,
                147040, 2,
                147480, 0,
                147480, 2,

            }
        };
    

}


    public static Song GetSongData()
    {
        return levels[LevelManager.newLevelName];
    }
    public static List<Song> GetAllSongs() // returns a Song list of every level
    {
        List<Song> levelsList = new List<Song>();
        foreach (KeyValuePair<string, Song> song in levels) // for every level
        {
            levelsList.Add(song.Value);
        }
        return levelsList;
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
    public string teacher;
}
