#include <iostream>

using namespace std;

void ten(unsigned long long a){

    if(a!=1){
        ten(a/2);
    }
    cout<<a%2;
}

int main() {

    long long n;
    cin>>n;

    ten(n);
    cout<<"\n";
}

// n이 100.000.000.000.000보다 작을 때 
// unsigned long long 을 써야 된다.