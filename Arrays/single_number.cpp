#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> nums = { 2,2,1,3,4,4,1};
    int result = 0;
    for (int num : nums){
        result ^= num;
    }
    cout << result;
}