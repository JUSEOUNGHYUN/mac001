#include <iostream>

using namespace std;

int main() {

    int a[1001]={0,};
    int tmp;
    int sum=0;
    int checker=0;
    int ans;

    for(int i=0; i<10; i++){
        cin>>tmp;

        a[tmp]++;
        sum+=tmp;
    }

    for(int i=0; i<1001; i+=10){
        if(a[i]&&checker<a[i]){
            checker=a[i];
            ans=i;
        }
    }

    cout<<sum/10<<"\n"<<ans;
}