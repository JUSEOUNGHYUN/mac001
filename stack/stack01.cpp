#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {

    stack<int> st;

    int n;
    cin>>n;


    for(int i=0; i<n; i++){
        string str;
        cin>>str;

        if(str=="push"){
        int a;
        cin>>a;
        st.push(a);
        }

        else if(str=="pop"){
            if(st.empty()){
                cout<<"-1"<<"\n";
            }
            else {
                cout<<st.top()<<"\n";
                st.pop();
            }
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

        else if(str=="size"){
            cout<<st.size()<<"\n";
        }
    }

    return 0;
}