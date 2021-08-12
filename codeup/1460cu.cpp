#include <iostream>

using namespace std;


int main() {

    int a[101][101]={};

    int n;
    cin>>n;

    int x=1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            a[i][j]=x;
            x++;
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}