#include <iostream>

using namespace std;

int main() {

    int test;
    cin>>test;

    int temp;
    int y=0, m=0;

    for(int i=0; i<test; i++){
        cin>>temp;

        y+=(temp/30+1)*10;
        m+=(temp/60+1)*15;
    }

    if(m>y){
        cout<<"Y"<<" "<<y;
    }
    else if(m==y){
        cout<<"Y M"<<" "<<y;
    }
    else {
        cout<<"M "<<m;
    }

    return 0;
}