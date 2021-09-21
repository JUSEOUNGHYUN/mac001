#include <iostream>
#include <string>

using namespace std;

int main() {

    string str;
    cin>>str;

    int sum=0;

    for(int i=0; i<str.length(); i++){
        char c=str[i];

        sum+=(int(c)-'0');
    }

    if(sum%7==4){
        cout<<"suspect"<<"\n";
    }
    else{
        cout<<"citizen"<<"\n";
    }

    return 0;
}