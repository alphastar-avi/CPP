#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> nums = { 2,4,3,5,6,0,7,5,0,5,3,3};
    int ptr=0;

    for( int i=0; i<nums.size(); i++){
        if(nums[i] != 0 ){
            nums[ptr] = nums[i];
            ptr++;
        }
    }
    for ( int j=ptr; j<nums.size(); j++){
        nums[j]=0;
    }
    for ( int ar : nums){
        cout<< ar << " " ;
    }

}