#include <iostream>

using namespace std;

int main() {

    int a,b;

    int sum=0;

    while(true){
        cin>>a>>b;
        sum=a+b;

        if(a==0&&b==0){
            break;
        }
        cout<<sum<<"\n";
    }
    return 0;
}