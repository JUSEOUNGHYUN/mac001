#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n;
    double a;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a;
    cout<<fixed;
    cout.precision(2);
    cout<<"$"<<a*0.8<<"\n";
    }

}