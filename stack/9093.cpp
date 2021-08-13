#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;

    string str;
    stack<char> st;
    cin.ignore();

    for(int i=0; i<n; i++){
        getline(cin, str);
        str+=' ';

        for(int i=0; i<str.length(); i++){
            if(str[i]==' '){
                while(!st.empty()){
                    cout<<st.top();
                    st.pop();
                }
                cout<<' ';
            }
            else{
                st.push(str[i]);
            }
        }
        cout<<"\n";
    }

    return 0;
}