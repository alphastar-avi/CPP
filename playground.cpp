#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums={2,34,4,6,2,1,3,5,1,3};
    
    for(int i=0; i<nums.size(); i++){
        for(int j=i; j<nums.size(); j++){
            if(nums[i]>nums[j]){
                swap(nums[i],nums[j]);
            }

        }
    }
    for(int i : nums){
        cout << i << " ";
    }

}