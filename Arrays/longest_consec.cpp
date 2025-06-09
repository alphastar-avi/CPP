#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};

    unordered_set<int> s(nums.begin(), nums.end());

    int longest = 0;

    for (int num : s) {
    
        if (s.find(num - 1) == s.end()) {
            int current = num;
            int count = 1;

            while (s.find(current + 1) != s.end()) {
                current++;
                count++;
            }

            longest = max(longest, count);
        }
    }

    cout << longest << endl;
    return 0;
}
