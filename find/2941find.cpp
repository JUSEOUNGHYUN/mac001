#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    vector<string> cro={"c=","c-","dz=","d-","lj","nj","s=","z="};

    int idx;
    string str;
    cin>>str;
    for(int i=0; i<cro.size(); i++){
        while(1){
            idx=str.find(cro[i]);
            if(idx==string::npos)
            break;
            str.replace(idx, cro[i].length(),"#");
        }
    }
    cout<<str.length();
}