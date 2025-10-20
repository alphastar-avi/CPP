



// include or exclude 
class Solution {
public:
    void makesub(vector<vector<int>>& allsubs, vector<int>& currsub, 
                 vector<int>& nums, int index, int k) {

        // if current combination reached size k, add it
        if (currsub.size() == k) {
            allsubs.push_back(currsub);
            return;
        }

        // if we've processed all numbers, stop
        if (index == nums.size()) return;

        // include current number
        currsub.push_back(nums[index]);
        makesub(allsubs, currsub, nums, index + 1, k);

        // exclude current number
        currsub.pop_back();
        makesub(allsubs, currsub, nums, index + 1, k);
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> allsubs;
        vector<int> currsub;
        vector<int> nums;

        for (int i = 1; i <= n; i++) {
            nums.push_back(i);
        }

        makesub(allsubs, currsub, nums, 0, k);
        return allsubs;
    }
};

// 

class Solution {
public:
    void comb(int start, int n, vector<int> curr, vector<vector<int>>& res, int k ){

        //choose 
        if(curr.size()==k){
            res.push_back(curr);
        }

        //choose and dfs
        for( int i = start ; i < n; i++){
            curr.push_back(i+1);
            comb(i+1, n , curr, res, k );
            curr.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> curr;

        comb(0,n,curr,res,k);
        return res;
    }
};