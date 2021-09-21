#include <iostream>

using namespace std;

/*int main() {

    int test;
    cin>>test;

    int cnt=0;

    for(int i=0; i<test; i++){
        int a,b;
        cin>>a>>b;

        if(a%b>0){
            cout<<a/b+1<<"\n";
        }
        else if(a%b==0){
            cout<<a/b<<"\n";
        }
    }
    return 0;
}*/

int main() {

    int test;
    cin>>test;

    while(test--){
        int n,c;
        cin>>n>>c;

        if(n%c==0){
            cout<<n/c<<"\n";
        }
        else{
            cout<<n/c+1<<"\n";
        }
    }
    return 0;
}