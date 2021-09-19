// 입력받은 수를 내림차순으로 정렬한뒤
// a번쨰부터 b까지 젤 큰수를 구하는 코드

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<pair<int, int> > v;

    int test;
    cin>>test;

    int num;

    for(int i=0; i<test; i++){
        cin>>num;
        v.push_back(make_pair(num, i+1));
    }
    
    sort(v.begin(), v.end(), greater<pair<int,int> >());

    int intest;
    cin>>intest;

    int max=-1000;

    for(int i=0; i<intest; i++){
        int a,b;
        cin>>a>>b;
        for(int j=0; j<test; j++){
            if(v[j].second>=a && v[j].second<=b){
                cout<<v[j].first<<" ";
                break;
            }
        }
    }
    return 0;
}




// sort(v.begin(), v.end(), greater<pair<int,int> >())
// sort(v.rbegin(), v.rend());  
// 둘 다 내림차순 