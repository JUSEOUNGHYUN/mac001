
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlyaerBall : MonoBehaviour
{
    public float jumpPower;
    bool isJump;
    Rigidbody rigid;

    void Awake()
    {
        isJump = false;
        rigid = GetComponent<Rigidbody>();
    }

    void Update()
    {
        if (Input.GetButtonDown("Jump") && !isJump)
        {
            isJump = true;
            rigid.AddForce(new Vector3(0, jumpPower, 0), ForceMode.Impulse);
        }   
    }

    void FixedUpdate()
    {
        // 구체 이동 
        float h = Input.GetAxisRaw("Horizontal"); // x축 이동 왼쪽, 오른쪽
        float v = Input.GetAxisRaw("Vertical"); // z축 위, 아래
        rigid.AddForce(new Vector3(h, 0, v), ForceMode.Impulse);
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.name == "Floor")  // 점프를 한번많 하게 하기.
            isJump = false;
    }
}
