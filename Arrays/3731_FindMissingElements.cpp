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
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int maxx = INT_MIN;
        int minn = INT_MAX;

        for(int i : nums){
            maxx = max(maxx, i);
            minn = min(minn, i);
        }

        unordered_set<int> seen(nums.begin(), nums.end());
        vector<int> res;
        
        for(int i=minn; i<=maxx; i++){
            if(!seen.count(i)){
                res.push_back(i);
            }
        }
        return res;
    }
};