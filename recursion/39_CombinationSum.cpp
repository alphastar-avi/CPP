class Solution {
public:
    void combinationSum(vector<vector<int>>& res, vector<int>& currcand, int start, int target,vector<int>& candidates){
        //if it matches the target 
        if(target == 0){
            res.push_back(currcand);
            return;
        }
        // prune the branch 
        if(target < 0){
            return;
        }
        //choose the options / repatable
        for(int i = start; i < candidates.size(); i++){
            currcand.push_back(candidates[i]);
            combinationSum(res, currcand, i, target-candidates[i],candidates);
            currcand.pop_back();
        }

    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> currcand;

        combinationSum(res,currcand,0,target,candidates);
        return res;
    }
};