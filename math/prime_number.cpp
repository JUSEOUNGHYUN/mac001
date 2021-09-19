#include <iostream>
#include <cmath>

using namespace std;

bool sosu(int n){
    if(n<2){
        return false;
    }    

    int a=(int)sqrt(n);

    for(int i=2; i<=a; i++){
        if(n%i==0){
            return false;
        }
    }
        return true;
}

int main() {

    int t;
    cin>>t;

    if(sosu(t)){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }

    return 0;
}