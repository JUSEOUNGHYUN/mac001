#include <iostream>
#include <string>

using namespace std;

int main() {

    while(1){

        string str;
        getline(cin, str);

        if(str=="#"){
            break;
        }

        int sum=0;
        int len=str.length();

        for(int i=0; i<len; i++){
            
            char c=str[i];
            if(c==' ');

            else
            sum+=(int)(c-'A'+1)*(i+1);
        }

        cout<<sum<<"\n";
    }

    return 0;
}