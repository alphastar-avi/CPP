class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        if(n <= 1) return 0;
        sort(nums.begin(), nums.end());
        int minScore = nums[k-1] - nums[0];
        for(int i = 0; i <= n - k; i++){
            minScore = min(minScore, nums[i + k - 1] - nums[i]);
        }
        return minScore;
    }
};