#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int test,w,h;
    cin>>test>>w>>h;

    for(int i=0; i<test; i++){
        int n;
        cin>>n;

        int c=pow(w,2)+pow(h,2);
        int b=floor(sqrt(c));

        if(b>n || b==n){
            cout<<"DA"<<"\n";
        }
        else{
            cout<<"NE"<<"\n";
        }
    }
    return 0;
}