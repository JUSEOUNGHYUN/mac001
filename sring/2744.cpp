#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {

    string str;
    cin>>str;

    for(int i=0; i<str.length(); i++){
        if(str[i]==tolower(str[i])){
            str[i]=toupper(str[i]);
        }
        else if(str[i]==toupper(str[i])){
            str[i]=tolower(str[i]);
        }
    }

    cout<<str;

    
}