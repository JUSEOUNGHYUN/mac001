#include <iostream>

using namespace std;

int main() {

    int min=1000000;
    int max=-1000000;

    for(int i=0; i<5; i++){
        int a;
        cin>>a;

        if(min>a){
            min=a;
        }

        if(a>max){
            max=a;
        }
    }

    cout<<max<<"\n"<<min;
}