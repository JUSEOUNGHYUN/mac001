#include <iostream>

using namespace std;

int ten(int num){

    int re=0;
    for(int i=1; num>0; i*=10){

        int bi=num%2;
        re+=bi*i;
        num/=2;
    }

    return re;
}
int main() {

    int n;
    cin>>n;

    cout<<ten(n);
}