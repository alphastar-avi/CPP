class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
    unordered_set<int> set;
    int left=0, sum=0, maxsum=0;

    for(int right=0; right<nums.size();){
        
        if(set.find(nums[right]) == set.end()){
            set.insert(nums[right]); 
            sum += nums[right];
            right++;
        } 
        else{
            set.erase(nums[left]);
            sum -= nums[left];
            left++;

        } 
        maxsum = max(maxsum, sum);
    }
    return maxsum;
    }
};
