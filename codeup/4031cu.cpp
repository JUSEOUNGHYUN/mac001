#include <iostream>

using namespace std;

int main() {

    int a;
    int max=0, omax=0;

    for(int i=0; i<7; i++){
        cin>>a;
        if(a%2==0){
            if(a>max){
                max=a;
            }
        }
        else if(a%2!=0){
            if(a>omax){
                omax=a;
            }
        }
    }
    cout<<max+omax;
}