#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;

    if(n==1){   
        return 0;   // N이 1인 경우 아무것도 출력하지 않는다.
    }

    for(int i=2; i<=n; i++){
        while(n%i==0){      
            cout<<i<<"\n";
            n/=i;
        }
    }
}

