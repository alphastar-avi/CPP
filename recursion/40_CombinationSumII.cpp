class Solution {
public:
    void comb2(vector<vector<int>>& res,vector<int> curr,vector<int> cand2,int target, int start){
        if(target == 0){
            res.push_back(curr);
            return;
        }
        //pruning
        if(target < 0){
            return;
        }
        //pick choice 
        for(int i=start; i<cand2.size(); i++){
            // the i > start make sure that at each level it leaves the incluse ( first peration ) and only takes the next for operation ( choosing the next options), it leaves the operation when the included candidate is same as the privious included candidate
            if (i > start && cand2[i] == cand2[i - 1]) continue;
            curr.push_back(cand2[i]);
            comb2(res,curr,cand2,target-cand2[i], i+1);
            curr.pop_back();
        }
        

    }

    vector<vector<int>> combinationSum2(vector<int>& cand, int target) {
        sort(cand.begin(), cand.end());
        
        vector<vector<int>> res;
        vector<int> curr;

        comb2(res,curr,cand,target,0);
        return res;
    }
};