#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main() {

    int test;
    cin>>test;

    for(int i=0; i<test; i++){

        string str;
        cin>>str;

        if(str=="P=NP"){
            cout<<"skipped"<<"\n";
        }

        else{
                int pos=str.find('+');
                int a= stoi(str.substr(0,pos));
                int b= stoi(str.substr(pos+1));
                cout<<a+b<<"\n";
        }
    }

    return 0;
}