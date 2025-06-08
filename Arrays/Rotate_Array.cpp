#include<iostream>
#include<vector>

using namespace std;

int main(){
vector<int>nums= {1,2,3,4,5,6,7,8,9};
int n = nums.size();
        int k = 3;
        
        // temp array to store the last k elements
        vector<int> temp(k);
        for (int t = 0; t < k; t++) {
            temp[t] = nums[n - k + t];
        }

        // Shift elements to the right
        for (int i = n - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }

        // Copy temp elements to the beginning
        for (int t = 0; t < k; t++) {
            nums[t] = temp[t];
        }

        for ( int out : nums){
            cout << out << "";
        }
}