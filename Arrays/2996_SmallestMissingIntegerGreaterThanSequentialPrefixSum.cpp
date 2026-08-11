class Solution {
public:
    int missingInteger(vector<int>& nums) {

        int sum = nums[0];

        for (size_t i = 0; i < nums.size() - 1; i++) {
            if (nums[i+1] == nums[i] + 1) {
                sum += nums[i+1];
            } else {
                break;
            }
        }

        ranges::sort(nums);

        for (int num : nums) {
            if (num == sum) {
                sum++;
            }
        }

        return sum;
    }
};