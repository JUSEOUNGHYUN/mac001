#include <iostream>
#include <string>

using namespace std;

int main() {

    string str;
    getline(cin, str);

    int cnt=0;

    for(int i=0; i<str.length(); i++){
        if(str[i]==' '){
            cnt++;
        }
    }
    cout<<cnt+1;
}