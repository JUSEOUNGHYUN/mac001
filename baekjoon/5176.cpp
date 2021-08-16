#include <iostream>
#include <vector>

using namespace std;

int main() {

    int k;
    cin>>k; //테스트 케이스 수

    for(int i=0; i<k; i++){
        int p,m;    // 참가자수와 자리의 수
        int res=0;  // 못 앉는 사람의 수
        int seat;   // 원하는 자리
        cin>>p>>m;  

        vector<int>v(m+1,0); //0으로 초기화

        for(int j=0; j<p; j++){
            cin>>seat;

            if(v[seat]==0){ // 자리의 수 배열에 앉고싶은 숫자의 인덱스가 비어있을경우
                v[seat]=1;  // 체크
            }
            else{           // 그렇지 않을경우
                res++;      // 못앉는 사람의 수 증가
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}