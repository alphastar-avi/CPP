class Solution {
public:
    void perm(vector<int>& nums, vector<vector<int>>& res, vector<int> curr, vector<int>& freq){
        //final output length is = to nums.size
        if(curr.size()==nums.size()){
            res.push_back(curr);
            return;
        }
        //go through everyelement each time
        for( int i=0; i<nums.size(); i++){
        if(!freq[i]){
            //element will be added
            freq[i] = 1;
            curr.push_back(nums[i]);
            perm(nums,res,curr,freq);
            //removed the element
            freq[i] = 0;
            curr.pop_back();
        }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr;
        vector<int> freq(nums.size(), 0);
        
        perm(nums, res, curr, freq);
        return res;
    }
};