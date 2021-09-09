#include <iostream>
#include <string>

using namespace std;

int main() {

    string color[10]={"black","brown","red","orange","yellow","green","blue","violet","gery","white"};
    string str; //저항 색깔 입력

    int a[3];
     // 저항 저항값 배열에 a[0]= 첫번째 색깔 수
     //               a[1]= 두번째 색깔 수
     //               a[2]= 세번째 색깔 수      
    long long int r=0; // 저항값

    for(int i=0; i<3; i++){
        cin>>str; // 저항색깔 3개 입력
        for(int j=0; j<10; j++){
            if(color[j]==str) {// color배열에서 입력한 색깔이 맞다면{}
                a[i]=j;
            }
        }
    }

    r=a[0]*10+a[1]; 
    for(int i=0; i<a[2]; i++){
        r*=10;
    }

    cout<<r<<"\n";
}