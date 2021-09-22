#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int test;
    cin>>test;

    while(test--){

    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;

    double as = 350.34;
    double bs = 230.90;
    double cs = 190.55;
    double ds = 125.30;
    double es = 180.90;

    cout<<fixed;
    cout.precision(2);
    cout<<"$"<<(as*a)+(bs*b)+(cs*c)+(ds*d)+(es*e)<<"\n";

    }
    return 0;
}