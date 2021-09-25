using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewBehaviourScript : MonoBehaviour
{
    int health = 30;

    void Start()
    {
        Debug.Log("hello unity");

        int level = 5;
        float strength = 15.5f;
        string playerName = "검사";
        bool isFullLevel = false;

        string[] monsters = { "슬라임", "사막뱀", "악마" };
        int[] monsterLevel = new int[3];
        monsterLevel[0] = 1;
        monsterLevel[1] = 6;
        monsterLevel[2] = 20;

        List<string> items = new List<string>();
        items.Add("생명물약 30");
        items.Add("마나물약 30");

        Debug.Log("가지고 있는 아이템");
        Debug.Log(items[0]);
        Debug.Log(items[1]);

        int exp = 1500;
        exp = 1500 + 320;
        exp = exp - 10;
        level = exp / 30;
        strength = level * 3.1f;

        Debug.Log("용사의 총 경험치는?");
        Debug.Log(exp);
        Debug.Log("용사의 level ?");
        Debug.Log(level);
        Debug.Log("용사의 force ?");
        Debug.Log(strength);

        int nextexp = 300 - (exp % 300);
        Debug.Log("next level ?");
        Debug.Log(nextexp);

        string title = "legend";
        Debug.Log("dydtkdml name");
        Debug.Log(title + " " + playerName);

        int fulllevel = 99;
        isFullLevel = level == fulllevel;
        Debug.Log("dudtkdml aksfpq" + isFullLevel);

        bool isEndTutorial = level > 10;
        Debug.Log("totorial finish??" + isFullLevel);

        //int health = 30;
        int mana = 15;
        bool isBadCondition = health <= 50 && mana <= 20;
        Debug.Log("용사의 상태가 나쁩니까?" + isBadCondition);

        string condition = isBadCondition ? "bad" : "good";

        if (condition == "bad")
        {
            Debug.Log("플레이어 상태가 나쁘니 아이템을 사용하세요");
        }
        else
        {
            Debug.Log("플레이어 상태가 좋습니다");
        }

        if (isBadCondition && items[0] == "생명물약 30")
        {
            items.RemoveAt(0);
            health += 30;
            Debug.Log("생명포션30을 사용");
        }
        else if (isBadCondition && items[0] == "마나물약 30")
        {
            items.RemoveAt(0);
            mana += 30;
            Debug.Log("마나포션30을 사용");
        }

        switch (monsters[0])
        {
            case "슬라임":
            case "사막뱀":
                Debug.Log("sohung monstr");
                break;
            case "악마":
                Debug.Log("중형 몬스터가 출현");
                break;
            case "골렘":
                Debug.Log("대형 몬스터가 출현");
                break;
            default:
                Debug.Log("??? 몬스터가 출현!");
                break;
        }

        while (health > 0)
        {
            health--;
            if (health > 0)
                Debug.Log("dog damage dlqguTek" + health);
            else
                Debug.Log("die");

            if (health == 10)
            {
                Debug.Log("해독제 사용");
                break;
            }
        }

        for(int count=0; count<10; count++)
        {
            health++;
            Debug.Log("붕대 치료중...." + health);
        }

        for(int index=0; index<monsters.Length; index++)
        {
            Debug.Log("이 지역에 있는 몬스터: " + monsters[index]);
        }

        foreach(string monster in monsters)
        {
            Debug.Log("이 지역에 있는 몬스터: " + monster);
        }

        Heal();
    }

    //함수(메소드)
    void Heal()
    {
        health += 10;
        Debug.Log("힘을 받았습니다." + health);
    }
}
