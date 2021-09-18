#include <iostream>

using namespace std;

int main() {

    int test, k;
    char arr[201];

    cin>>test;
    cin>>arr;

    k=test%3;

    for(int i=0; i<test; i++){
        if((i%3==k)&&i>0){
            cout<<',';
        }
        cout<<arr[i];
    }

    return 0;
}