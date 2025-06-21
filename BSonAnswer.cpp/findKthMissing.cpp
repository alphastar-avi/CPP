#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {2, 3, 4, 7, 11}; 
    int k = 5;                           

    int low = 0, high = nums.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        int missing = nums[mid] - (mid + 1);

        if (missing < k) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    int result = low + k;
    cout << result << endl;

    return 0;
}
