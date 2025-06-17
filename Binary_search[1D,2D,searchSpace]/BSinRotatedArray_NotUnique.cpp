#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {5,6,7,8,9,0,1,2,3,4};
    int low = 0, high = nums.size() - 1, x;
    cin >> x;

    while (low <= high) {
        int mid = low + (high - low)/2;
        if (nums[mid] == x) {
            cout << mid;
            return 0;
            if ( nums[mid]==nums[mid] && nums[mid]==nums[high] ){
                low++;
                high--;
            continue;
            }

        }
        // Left half is sorted
        if (nums[low] <= nums[mid]) {
            if (nums[low] <= x && x < nums[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        // Right half is sorted
        else {
            if (nums[mid] < x && x <= nums[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    cout << "-1";  // not found
    return 0;
}
