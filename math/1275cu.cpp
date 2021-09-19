#include <iostream>

using namespace std;

int main() {

    int a,b;
    cin>>a>>b;

    int mul=1;

    for(int i=1; i<=b; i++){
        mul*=a;
    }

    cout<<mul;

    return 0;
}