#include <iostream>
#include <string>

using namespace std;

int main() {

    // stirng 으로 숫자를 받고 마지막 숫자가 홀수인지 짝수인지

    int n;
    cin>>n;

    string str;

    for(int i=0; i<n; i++){
        cin>>str;

        if(str[str.length()-1]%2==0){
            //str[i]의 끝자리가 짝수인경우 
            cout<<"even"<<"\n";
        }
        else{
            cout<<"odd"<<"\n";
        }
    }
    return 0;
}

// str[str.length()-1]=str[i]의 맨 끝자리
