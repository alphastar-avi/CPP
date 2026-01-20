class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    map<int,int> mpp;
    stack<int> mono;

    for(int i=nums2.size()-1; i>=0; i--){
        mpp[nums2[i]] = -1;
        while(!mono.empty() && mono.top() <= nums2[i]) mono.pop();
        if(!mono.empty()) mpp[nums2[i]] = mono.top();
        mono.push(nums2[i]);
    }
    for(int i=0; i<nums1.size(); i++){
        nums1[i] = mpp[nums1[i]];
    }
    return nums1;
    }
};