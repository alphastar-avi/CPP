class Solution {
public:

    void getsub(vector<vector<int>>& allsub, vector<int>& currsub, vector<int>& nums, int index){

        //basecase
        if(index == nums.size()){
            allsub.push_back(currsub);
            return;
        }   
        //push elements
        currsub.push_back(nums[index]);
        //recrusive for next element
        getsub(allsub, currsub, nums, index+1);

        //exclude element
        currsub.pop_back();
        //Dont include the same elemnts thats consecutive
        int idx = index+1; 
        while(idx < nums.size() && nums[idx] == nums[idx-1]) idx++ ;

        getsub(allsub, currsub, nums, idx);

    }


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> allsub;
        vector<int> currsub;

        getsub(allsub, currsub, nums, 0);
        return allsub;

    }
};