class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    int n = nums.size();
    if (n==0) return 0;

    int longest = 1;
    std::unordered_set<int> st(nums.begin(),nums.end());

    for ( auto it : st){
        if ( st.find(it-1) == st.end()){
            int ptr = 1;
            int x = it; 
            while ( st.find(x+1) != st.end()){
                ptr++;
                x++;
            }
            longest = max(longest, ptr);
        }
        
    }
    return longest;
    }

};