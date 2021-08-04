#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector<int> vec;

    int n;
    
    for(int i=0; i<5; i++){
        cin>>n;
        vec.push_back(n);
    }

    sort(vec.begin(), vec.end());

    for(int i=0; i<5; i++){
        cout<<vec[i]<<" ";
    }
}