using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Test : MonoBehaviour
{
    [SerializeField]
    private Text txt_name; // 텍스트 네임
    [SerializeField]
    private Image img_name; // 이미지 네임

    private bool isCoolTime = false; 

    private float currentTime = 5f;
    private float delayTime = 5f;

    private void Update()
    {
       
        if (isCoolTime)
        {
            currentTime -= Time.deltaTime;
            img_name.fillAmount = currentTime/ delayTime;
        }
    }


    public void Change()
    {
        txt_name.text = "변경됨";
        isCoolTime = true;
    }
}
