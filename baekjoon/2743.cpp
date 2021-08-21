#include <iostream>
#include <string>

using namespace std;

int main() {

    string str;
    cin>>str;

    int len=(int)str.length();

    int cnt=0;

    for(int i=0; i<len; i++){
        cnt++;    
    }

    cout<<cnt;
}