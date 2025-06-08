#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> nums = { 1,0,0,1,1,1,1,0,0,1,1 };
    int current_one = 0;
    int max_one = 0;

    for( int num : nums){
        if(num == 1){
            current_one++;
            max_one = max(current_one,max_one);
        }
        else{
            current_one=0;
        }
    }
    cout << max_one;

}