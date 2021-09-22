#include <iostream>

using namespace std;

int main() {

    int l,b,a,c,d;
    cin>>l>>b>>a>>c>>d;

    int math = b/c;
    int kor = a/d;

    if(b%c!=0){
        math+=1;;
    }

    if(a%d!=0){
        kor+=1;
    }

    if(kor>math){
        cout<<l-kor;
    }
    else{
        cout<<l-math;
    }

    return 0;
}