#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10}; 
    int target = 8;

    int lb = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    int ub = upper_bound(nums.begin(), nums.end(), target) - nums.begin();

    if (lb == nums.size() || nums[lb] != target) {
        cout << -1 << " " << -1 << endl;
    } else {
        cout << lb << " " << (ub - 1) << endl;
    }

    return 0;
}
