#include <iostream>

using namespace std;

int main() {

    int test;
    cin>>test;

    for(int i=0; i<test; i++){
        for(int j=0; j<test-1-i; j++){
            cout<<" ";
        }
        for(int j=0; j<test; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}

//    ****
//   ****
//  ****
// ****