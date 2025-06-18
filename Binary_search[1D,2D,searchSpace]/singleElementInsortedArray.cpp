#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1,1,2,2,3,3,4,4,5}; // Example input (only one single element)
    int n = nums.size();

    if (n == 1) {
        cout << nums[0] << endl;
        return 0;
    }

    if (nums[0] != nums[1]) {
        cout << nums[0] << endl;
        return 0;
    }

    if (nums[n - 1] != nums[n - 2]) {
        cout << nums[n - 1] << endl;
        return 0;
    }

    int low = 1, high = n - 2;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
            cout << nums[mid] << endl;
            return 0;
        }

        if ((mid % 2 == 1 && nums[mid] == nums[mid - 1]) ||
            (mid % 2 == 0 && nums[mid] == nums[mid + 1])) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << -1 << endl; // If no unique element is found (shouldn't happen in valid input)
    return 0;
}
