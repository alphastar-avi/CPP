#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 1, 3, 5, 6, 4};  // Example input
    int n = nums.size();

    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }
    if (nums[0] > nums[1]) {
        cout << 0 << endl;
        return 0;
    }
    if (nums[n - 2] < nums[n - 1]) {
        cout << n - 1 << endl;
        return 0;
    }

    int low = 1;
    int high = n - 2;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) {
            cout << mid << endl;
            return 0;
        }
        if (nums[mid] > nums[mid - 1]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << -1 << endl;  // Should never reach here for valid input
    return 0;
}
