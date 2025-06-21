#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 5, 9}; 
    int threshold = 6;              

    int low = 1, high = *max_element(nums.begin(), nums.end());

    while (low <= high) {
        int mid = low + (high - low) / 2;

        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += ceil((double)nums[i] / (double)mid);
        }

        if (sum <= threshold) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << low << endl;

    return 0;
}
