class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> prefixCount;
        prefixCount[0] = 1; // sum=0 seen once initially
        int sum = 0, ans = 0;

        for (int num : nums) {
            sum += num;  // current prefix sum

            // count subarrays ending here with sum == goal
            if (prefixCount.find(sum - goal) != prefixCount.end()) {
                ans += prefixCount[sum - goal];
            }

            // store current prefix sum
            prefixCount[sum]++;
        }
        return ans;
    }
};

class Solution {
public:
    int subArrays(vector<int>& nums, int goal) {
        if(goal<0) return 0;
        int sum = 0, count = 0, left = 0;
        for(int right = 0; right < nums.size(); right++){
            sum = sum + nums[right];
            while(sum > goal){
                sum -= nums[left];
                left++;
            }
            count += right - left + 1;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return subArrays(nums, goal) - subArrays(nums, goal-1);
    }
};