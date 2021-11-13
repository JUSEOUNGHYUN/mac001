#include <iostream>

using namespace std;

int main() {

    int test;
    cin>>test;

    for(int i=0; i<test; i++){
        for(int j=0; j<test-1-i; j++){
            cout<<" ";
        }
        cout<<"*";

        for(int j=0; j<i*2-1; j++){
            if(i==test-1){
                cout<<"*";
            }
            else{
            cout<<" ";
            }
        }

        if(i!=0){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}