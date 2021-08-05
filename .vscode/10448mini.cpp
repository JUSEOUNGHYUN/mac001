#include <iostream>
#include <vector>

using namespace std;

vector<int> eureka;

void press(void){

    int n=1;

    while(n*(n+1)/2<1000){
        eureka.push_back(n*(n+1)/2);
        n++;
    }
}

bool compare(int total){
    for(int i=0; i<eureka.size(); i++)
        if(eureka[i]==total)
        return true;

        return false;
    
}

int main(void){

    int a;
    cin>>a;

    press();

    for(int i=0; i<a; i++){
        int total;
        cin>>total;

        cout<<compare(total)<<"\n";
    }

    return 0;
}