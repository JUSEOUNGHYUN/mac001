#include <iostream>

using namespace std;

int main() {

    int test;
    cin>>test;

    for(int i=0; i<(test/2)+1; i++){
        for(int j=0; j<(test/2)-i; j++){
            cout<<" ";
        }
        for(int j=0; j<i*2+1; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}

/*

1 1
3 2
5 3
7 4
9 5
*/