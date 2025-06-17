#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {5,6,7,8,9,0,1,2,3,4};

        int ans = INT_MAX, low =0, high = nums.size()-1;

        while( low <= high){
            int mid = (high + low )/2;
            if(nums[low]<=nums[high]){
                ans = min(ans, nums[low]);
                break;
            }
            if(nums[low]<=nums[mid]){
                ans = min(ans,nums[low]);
                low = mid +1;
            }
            else{
                ans=min(ans,nums[mid]);
                high = mid -1; 
            }
        }


    cout << ans;  
    return 0;
}
