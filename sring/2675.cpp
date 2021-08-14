#include <iostream>
#include <string>

using namespace std;

int main() {

    int text;
    cin>>text;

    int n;
    string str;

    for(int i=0; i<text; i++){
        cin>>n>>str;

        for(int k=0; k<str.length(); k++){
            for(int j=0; j<n; j++){
                cout<<str[k];       // n=3 == aaabbbccc
            }                       // str[j]== abcabcabc
        }
        cout<<"\n";
    }
    return 0;
}