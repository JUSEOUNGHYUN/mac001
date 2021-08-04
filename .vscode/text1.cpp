#include <iostream>

using namespace std;

int main() {

    int a,n;
    cin>>a;
    int min=100;
    int max=0;
    int sum=0;

    for(int i=0; i<a; i++){

        cin>>n;
        sum+=n;

        if(min>n)
        min=n;
        

        if(n>max)
        max=n;
    }

    cout<<sum<<max<<min;

    return 0;
}