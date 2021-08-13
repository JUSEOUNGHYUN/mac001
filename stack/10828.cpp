#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {

    int n;
    cin>>n;

    stack<int> st;

    string str;

    for(int i=0; i<n; i++){
        cin>>str;

        int a;

        if(str=="push"){
            cin>>a;
            st.push(a);
        }

        else if(str=="pop"){
            if(st.empty()){
                cout<<"-1"<<"\n";
            }
            else{
                cout<<st.top()<<"\n";
                st.pop();
            }
        }

        else if(str=="size"){
            cout<<st.size()<<"\n";
        }

        else if(str=="top"){
            if(st.empty()){
                cout<<"-1"<<"\n";
            }
            else{
                cout<<st.top()<<"\n";
            }
        }

        else if(str=="empty"){
            if(st.empty()){
                cout<<"1"<<"\n";
            }
            else{
                cout<<"0"<<"\n";
            }
        }
    }
    return 0;
}