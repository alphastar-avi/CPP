#include <iostream>
#include <vector>

using namespace std;

int main() {


    multimap<i
    vector<int> nums = {1, 2, 3};
    int k = 3;

    int count = 0;

    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        for (int j = i; j < nums.size(); j++) {
            sum += nums[j];
            if (sum == k) {
                count++;
            }
        }
    }
    
    cout << count << endl;

    return 0;
}
