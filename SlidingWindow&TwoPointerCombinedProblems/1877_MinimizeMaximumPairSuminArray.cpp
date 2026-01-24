class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l=0, r=nums.size()-1;
        int maxx=0, minsum;

        while(l<r){
            minsum=nums[l]+nums[r];
            maxx=max(maxx, minsum);
            l++;
            r--;
        }
        return maxx;

    }
};