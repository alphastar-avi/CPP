class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int &it : nums){
            if(it%2==0){
                it = 0;
            } else it = 1;
        }
        unordered_map<int,int> prefixCount;
        prefixCount[0]=1;
        int count=0,currSum=0;

        for(int it : nums){
            currSum += it;
            if(prefixCount.find(currSum-k) != prefixCount.end()){
                count += prefixCount[currSum-k];
            }
            prefixCount[currSum]++;
        }
        return count;

    }
};
