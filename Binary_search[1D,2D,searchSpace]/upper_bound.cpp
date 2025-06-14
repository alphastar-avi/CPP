#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {2,4,6,8,9,10,20};
    int n = nums.size();

    int end = n;
    int start = 0;
    int ans = n;
    int x;
    cin >> x;

    while(start<=end){
        int mid = start + (end-start)/2;

        if( nums[mid]>x){
            ans = nums[mid];
            end = mid -1;
        }
        else{
            start = mid + 1;
    }
    }
    cout << ans;

    // // OR
    // int x;
    // cin >> x;
    // int ub = upper_bound(nums.begin(), nums.end(), x)-nums.begin();
    // cout << ub;

}