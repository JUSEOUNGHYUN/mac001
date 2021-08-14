#include <iostream>
#include <string>

using namespace std;

int main() {

    int n;
    cin>>n;
    
    string str;


    for(int i=0; i<n; i++){
        cin>>str;
        int sum=0,cnt=0;
    
    for(int i=0; i<str.length(); i++){
        if(str[i]=='O'){
            cnt++;
        }
        else{
            cnt=0;
        }
        sum+=cnt;
    }
    cout<<sum<<"\n";
    }
}