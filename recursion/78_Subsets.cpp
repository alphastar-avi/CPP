//recrusion 


// iterative 
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> sub = {{}};
        for(int num : nums){
            int n = sub.size();
            for(int i=0; i<n; i++){
                sub.push_back(sub[i]);
                sub.back().push_back(num);
            }
        }
        return sub;
    }
};

// recrusive
class Solution {
public:

    void makesub(vector<vector<int>>& allsubs,vector<int>& currsub,vector<int>& nums, int index ){
        if(index == nums.size()){
            allsubs.push_back(currsub);
            return;
        }

        //include
        currsub.push_back(nums[index]);
        //move to next ( include )
        makesub(allsubs, currsub, nums, index+1);

        //exclude the latest push
        currsub.pop_back();
        //exclude move
        makesub(allsubs, currsub, nums, index+1);

    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allsubs;
        vector<int>  currsub;

        makesub(allsubs, currsub, nums, 0);
        return allsubs;
    }
};