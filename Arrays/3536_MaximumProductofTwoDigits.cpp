class Solution {
public:
    int maxProduct(int n) {
        vector<int> res;

        while(n>0){
            res.push_back(n%10);
            n/=10;
        }
        sort(res.begin(), res.end());

        return *(res.end() - 1) * *(res.end() - 2);
    }
};