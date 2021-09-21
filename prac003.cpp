#include <iostream>

using namespace std;

int main() {

    int test;
    cin>>test;

    int arr[100];

    while(test--){
        int i=0;
        int n,copy,sum, re=0;
        bool T=true;
        cin>>n;
        copy=n;

        while(1){
            re+=n%10;
            if(n/10==0){
                break;
            }
            re*=10;
            n/=10;
        }
        sum=copy+re;

        while(1){
            arr[i]=sum%10;
            i++;
            if(sum/10==0){
                break;
            }
            sum/=10;
        }

        for(int j=0; j<i/2; j++){
            if(arr[j]!=arr[i-2-j]){
                T=false;
            }
        }

        if(T){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }

    return 0;
}