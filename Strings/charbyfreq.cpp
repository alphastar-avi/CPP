#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s = "hello";

    unordered_map<char, int> freqMap;
    for( char i : s){
        freqMap[i]++;
    }

    vector<pair<char,int>> freq(freqMap.begin(), freqMap.end());

    sort(freq.begin(), freq.end(), []( const pair<char,int>& a, const pair<char,int>& b ){
        return a.second > b.second;
    });

    string out;
    for ( auto& i : freq){
        out += string(i.second,i.first );
    }

    cout << out;


}