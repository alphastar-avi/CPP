class Solution {
public:
    int atMost(vector<int>& nums, int k) {
        int left = 0, count = 0, odds = 0;
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] % 2) odds++; // count odd numbers

            while (odds > k) { // shrink if too many odds
                if (nums[left] % 2) odds--;
                left++;
            }
            count += (right - left + 1); // all subarrays ending at right
        }
        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};

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


