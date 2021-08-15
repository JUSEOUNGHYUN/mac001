// 8개 숫자 중에 5개 높은 숫자를 더하고 그 숫자들이 어디 배열인덱스에 있는 출력하는
// 코드

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <utility>

using namespace std;

int main() {
    
    vector<pair <int, int> > v(8);

    for(int i=0; i<8; i++){
        cin>>v[i].first;
        v[i].second=i+1;
    }

    sort(v.begin(), v.end(), greater<pair<int, int> >());
    // 문제 점수는 내림 차순

    /*for(int i=0; i<8; i++){
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
    
    66 6    
    64 8
    50 3
    48 4
    33 5
    30 2
    20 1
    0 7
    */

    int sum=0;

    vector<int> index; // 몇 번째 문제
    for(int i=0; i<5; i++){
        sum+=v[i].first; //v[i]에 있는 배열에서 66,64,50,48,33을 더한다.
        index.push_back(v[i].second); //6,8,3,4,5
    }

    cout<<sum<<"\n";

    sort(index.begin(), index.end());
    // 문제 번호는 오름차순
    // 3,4,5,6,8
    

    for(int i=0; i<index.size(); i++){
        cout<<index[i]<<" ";
    }
    cout<<"\n";

    return 0;



}