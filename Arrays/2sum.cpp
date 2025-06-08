#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){

    vector<int> nums = { 2,4,3,5,1,8,6};
    int target = 10;
    int n = nums.size();

    map<int,int>mpp;
    for( int i=0; i<n; i++){
        int a = nums[i];
        int need = target - a;
        
        if( mpp.find(need) != mpp.end()){
            cout << i << " " << mpp[need] << endl;
            return 0;
        }
        mpp[a]=i;


    }
    cout << "None" << endl;

}