class Solution {
public:
    int maxProduct(vector<int>& res) {
    sort(res.begin(), res.end());
    return (*(res.end() - 1)-1) *  (*(res.end() - 2)-1); 
    }
};