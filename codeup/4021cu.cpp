#include <iostream>

using namespace std;

int main() {

    int a;
    int sum=0;
    int cnt=0;
    for(int i=0; i<7; i++){
        cin>>a;
        if(a%2!=0){
            sum+=a;
            cnt++;
        }
    }
    if(cnt==0){
        cout<<"-1";
    }
    else{
        cout<<sum;
    }
}