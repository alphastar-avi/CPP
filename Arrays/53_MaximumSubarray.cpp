// //brut force
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         long long maxi = LLONG_MIN;
//         for (int i = 0; i < nums.size(); i++) {
//             long long sum = 0;
//             for (int j = i; j < nums.size(); j++) {
//                 sum += nums[j];
//                 maxi = max(maxi, sum);
//             }
//         }
//         return (int)maxi;
//     }
// };


//kadane
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0], curr_sum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            curr_sum = max(nums[i], curr_sum + nums[i]);
            max_sum = max(max_sum, curr_sum);
        }
        return max_sum;
        }
};