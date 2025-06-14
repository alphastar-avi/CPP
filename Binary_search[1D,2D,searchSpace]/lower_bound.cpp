#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 3, 5, 7, 9};
    int x = 6;

    int low = 0;
    int end = nums.size() - 1;
    int ans = nums.size();

    while (low <= end) {
        int mid = low + (end - low) / 2;

        if (nums[mid] >= x) {
            ans = mid;
            end = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    
    if (ans < nums.size()) {
        cout << "Element at lower bound" << ":" << nums[ans] << endl;
    } else {
        cout << "out of array" << ans << endl;
    }

    return 0;
}
