#include <iostream>

using namespace std;

int main() {

    int a;
    cin>>a;

    int i=0; 

    for(int sum=2; sum<=a; i++)
        sum+=6*i;

        if(a==1)
        i=1;

        cout<<i;

        return 0;
}