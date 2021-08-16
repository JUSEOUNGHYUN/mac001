#include <iostream>
#include <string>

using namespace std;

int main() {

    // string to integer
    string s;
    int num;

    cin>>s>>num;

    int num2=stoi(s);

    cout<<num+num2<<"\n";
    // 1000+2030 = 3030;

    // integer to string
    string s2=to_string(num);

    cout<<s+s2<<"\n";
    // = 10002030
}