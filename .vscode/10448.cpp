#include <iostream>

using namespace std;

int num;
bool eu;

void solution(int start, int sum, int pick){
    if(pick==3&&num==sum){
        eu=true;
        return;
    }

    else if(pick>=3||sum>num) return;

    int trinum;
    for(int n=start; n<50; n++){
        trinum=(n*(n+1))/2;
        solution(n+1, sum+trinum, pick+1);
        solution(n+1, sum+(trinum*2), pick+2);
        solution(n+1, sum+(trinum*3), pick+3);
    }
}

int main(void){
    int testcase;
    cin>>testcase;
    while(testcase--){
        cin>>num;
        eu=false;
        solution(1,0,0);
        cout<<eu<<"\n";
    }

    return 0;
}