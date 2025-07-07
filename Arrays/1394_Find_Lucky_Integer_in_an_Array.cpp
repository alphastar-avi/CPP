#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

    int findLucky(vector<int>& arr){
    map<int,int> mpp;
    int res = -1;
    for (int nums : arr ){
        mpp[nums]++;
    } 
    for (auto v : mpp){
        if(v.first==v.second) res = v.first;
    }
    return res;
}

int main() {
vector<int> arr = {1, 2, 3, 2, 1, 2, 3};
cout << "Largest lucky integer: " <<
findLucky(arr) << endl; // Output: 3


return 0;
}