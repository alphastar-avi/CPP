#include<iostream>
#include<vector>

using namespace std;

int main(){
vector<int>nums= {0,1,2,3,4,5,7,8,9};
int n = nums.size();
    int sum2 = (n * (n+1))/2;
    int sum = 0;

    for( int i = 0; i < n; i++){
        sum += nums[i];
    }
    cout << sum2 - sum;
    
}

