class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        stack<int> mono;
        for(int i=(2*n)-1; i>=0; i--){
            while(!mono.empty() && mono.top()<=nums[i%n]) mono.pop();
            if(i<n) res[i] = mono.empty()? -1 : mono.top();
            mono.push(nums[i%n]);
        }
        return res;
    }
};