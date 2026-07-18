//#include <algorithm>
//#include <numeric>  

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max_elem = *max_element(nums.begin(), nums.end());
        int min_elem = *min_element(nums.begin(), nums.end());

        return std::gcd(min_elem, max_elem);
    }
};