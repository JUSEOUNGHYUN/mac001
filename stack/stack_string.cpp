#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {

    string str;
    cin>>str;

    stack<char> st;

    int len=(int)str.length();

    for(int i=0; i<len; i++){
        char c=str[i];
        st.push(c);
    }

    for(int i=0; i<len; i++){
        cout<<st.top();
        st.pop();
    }

    return 0;
}