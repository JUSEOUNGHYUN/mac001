#include <iostream>
#include <string>

using namespace std;

int main() {

    while(1){

        string str;
        cin>>str;

        if(str=="#"){
            break;
        }

        int len=str.length();

        int cnt=0;

        for(int i=0; i<len; i++){
            if(str[i]=='1'){
                cnt++;
            }
        }

        if(str[len-1]=='e'){
            if(cnt%2==0){
                str[len-1]='0';
            }
            else{
                str[len-1]='1';
            }
        }

        else{
            if(cnt%2==0){
                str[len-1]='1';
            }
            else{
                str[len-1]='0';
            }
        }
        cout<<str<<"\n";
    }

    return 0;
}