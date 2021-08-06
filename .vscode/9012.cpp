#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool check(string str){
    int len =(int)str.length();     // 문자열 길이
    stack<char> st;                 // char 타입을 받는 stack 선언

    for(int i=0; i<len; i++){       // 문자열 길이 만큼 반복문
        char c = str[i];            // 문자 하나씩 받음

        if(c=='('){
            st.push(str[i]);        // 여는 괄호면 push;
        }
        else {
            if(!st.empty()){        // 닫는 괄호면 stack이 비어있는지 확인 후
                st.pop();           // 스택이 비어있지 않으면 pop
            }
            else{
                return false;       // 비어있으면 fasle
            }
        }
    }

    return st.empty();              // 반복문이 끝나고 스택에 괄호가 남아있으면 false
}

int main(void){

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;

    string str;

    for(int i=0; i<n; i++){
        string str;
        cin>>str;

        if(check(str)){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }

    return 0;
    
}