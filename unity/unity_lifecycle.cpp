using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// 유니티의 생명주기
//     활성화      <-     비활성화
//       |                 ^
//      \ /                |  
// 초기화 -> 물리 -> 게임로직 -> 해제
                    
public class NewBehaviourScript : MonoBehaviour
{
    // 초기화 영역
    void Awake()
    {
        Debug.Log("플레이어 데이터가 준비 되었습니다.");
    }

    void OnEnable()
    {
        Debug.Log("플레이어가 로그인 했습니다.");   
    }

    void Start()
    {
        Debug.Log("사냥 준비를 챙겼습니다.");
    }

    // 물리 연산 업데이트 
    // 고정된 실행 주기로 cpu를 많이 사용
    void FixedUpdate()
    {
        Debug.Log("이동~~");
    }

    // 게임로직
    void Update()
    {
        Debug.Log("몬스터 사냥!!");   
    }

    // 모든 업데이트가 끝난
    void LateUpdate()
    {
        Debug.Log("경험치 획득.");    
    }

    private void OnDisable()
    {
        Debug.Log("플레이어가 로그아웃 했습니다.");
    }

    // 게임 오브젝트가 삭제 될때
    void OnDestroy()
    {
        Debug.Log("플레이어 데이터를 해제하였습니다.");    
    }


}
