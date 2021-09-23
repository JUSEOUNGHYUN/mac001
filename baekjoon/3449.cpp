#include <iostream>
#include <string>

using namespace std;

int main() {

    int test;
    cin>>test;

    for(int i=0; i<test; i++){
        string str1, str2;
        cin>>str1>>str2;

        int cnt=0;

        for(int i=0; i<str1.length(); i++){
            if(str1[i]!=str2[i]){
                cnt++;
            }
        }
        cout<<"Hamming distance is "<<cnt<<"."<<"\n";
    }
    return 0;
}