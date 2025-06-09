#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int main(){
    vector<int>vct={7,1,5,3,6,4};
    int min_v=INT_MAX;
    int max_v=INT_MIN;

    for( int price : vct){
        min_v = min(min_v , price);
        max_v = max(max_v, price - min_v);
    }
    cout << max_v;
}