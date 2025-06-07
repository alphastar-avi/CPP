#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums = { 2,3,2,2,2,2,4 };
    unordered_map <int,int> mpp;  
    int n = nums.size(); 
    
    for( int num : nums ){
        mpp[num]++;
    }

    for(auto it : mpp){
        if(it.second > (n/2)){
            cout << it.first;
        }
    }
}