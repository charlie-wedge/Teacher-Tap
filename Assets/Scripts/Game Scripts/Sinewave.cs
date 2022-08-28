using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// Creates a cool soundwave effect on the side of the game view, based on the static Audio Listener

public class Sinewave : MonoBehaviour
{


    public GameObject wavePrefab;
    public Transform waveParent;

    public float waveFrequency;
    public float waveOffset;
    public int numOfWaves;

    public float updateTime; // in seconds

    private Transform[] waves;
    private float timeAtLastUpdate = 0f;

    void Start()
    {
        waves = new Transform[numOfWaves*2];

        for (int i=0; i<numOfWaves*2; i++) // instantiate the actual wave objects on either side of the playing field
        {
            waves[i] = Instantiate(wavePrefab, wavePrefab.transform.position, wavePrefab.transform.rotation, waveParent).transform;
            waves[i].localPosition = new Vector3(i < numOfWaves ? -1.5f : 1.5f, wavePrefab.transform.position.y, wavePrefab.transform.position.z - (waveOffset * (i-(i < numOfWaves ? 0 : numOfWaves))));
        }

    }

    // https://docs.unity3d.com/ScriptReference/AudioSource.GetSpectrumData.html
    void Update()
    {
        if (Time.timeSinceLevelLoad-timeAtLastUpdate > updateTime)
        {
            float[] spectrum = new float[64];

            AudioListener.GetSpectrumData(spectrum, 0, FFTWindow.Rectangular);

            for (int n=0; n<2; n++)
            {
                for (int i = 0; i < numOfWaves; i++)
                {
                    //Debug.DrawLine(new Vector3(i - 1, spectrum[i] + 10, 0), new Vector3(i, spectrum[i + 1] + 10, 0), Color.red);
                    //Debug.DrawLine(new Vector3(i - 1, Mathf.Log(spectrum[i - 1]) + 10, 2), new Vector3(i, Mathf.Log(spectrum[i]) + 10, 2), Color.cyan);
                    waves[i+(numOfWaves*n)].transform.localScale = new Vector3(Mathf.Clamp(spectrum[Mathf.FloorToInt(64 / numOfWaves) * i] * LevelManager.speed * waveFrequency, 0.1f, 5f), waves[i].localScale.y, waves[i].localScale.z); // the scale to set the wave object based on the Audio Listener
                    //Debug.DrawLine(new Vector3(Mathf.Log(i - 1), spectrum[i - 1] - 10, 1), new Vector3(Mathf.Log(i), spectrum[i] - 10, 1), Color.green);
                    //Debug.DrawLine(new Vector3(Mathf.Log(i - 1), Mathf.Log(spectrum[i - 1]), 3), new Vector3(Mathf.Log(i), Mathf.Log(spectrum[i]), 3), Color.blue);

                }
            }


            timeAtLastUpdate = Time.timeSinceLevelLoad;
        }


    }

}
