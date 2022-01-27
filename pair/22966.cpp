#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool compare(pair<string, int> a, pair<string, int> b){
    return a.second<b.second;
}

int main() {

    int test;
    cin>>test;

    string str;
    int score;

    vector<pair<string, int>> vec;

    for(int i=0; i<test; i++){
        cin>>str>>score;
        
        vec.push_back(make_pair(str, score));

        sort(vec.begin(), vec.end(), compare);
    }

    cout<<vec[0].first;
}