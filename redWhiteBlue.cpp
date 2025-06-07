#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = {2,1,0,0,2,1,1,0};
    int n = nums.size();
    int ptr = 0;

    for( int i=0; i<n; i++){
        if(nums[i]==0){
            swap(nums[i],nums[ptr]);
            ptr++;
        }
    }

    for( int i=ptr; i<n; i++){
        if(nums[i]==1){
            swap(nums[i],nums[ptr]);
            ptr++;
        }
    }
    for(int num : nums){
        cout << num << "";
    }
}