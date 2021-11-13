#include <iostream>

using namespace std;

int main() {

    int test,test1;
    cin>>test>>test1;

    for(int k=0; k<test1; k++){

    for(int i=0; i<test; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<1; j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    for(int i=0; i<test-1; i++){
        for(int j=0; j<test-2-i; j++){
            cout<<" ";
        }
        for(int j=0; j<1; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    }
    return 0;
}

// *
//  *
//   *
//  *
// *
// *
//  *
//   *
//  *
// *