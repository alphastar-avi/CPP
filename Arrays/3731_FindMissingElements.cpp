class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> res;
        int minn = ranges::min(nums);
        int maxx = ranges::max(nums);

        for (int i = minn; i <= maxx; i++) {
            if (ranges::find(nums, i) == nums.end()) {
                res.push_back(i);
            }
        }

        return res;
    }
};

//optimal solution is below 
