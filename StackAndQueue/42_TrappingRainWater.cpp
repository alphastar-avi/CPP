class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> premax(n);
        //Prefix max
        premax[0] = height[0];
        for(int i = 1; i < n; i++) {
            premax[i] = max(premax[i-1], height[i]);
        }

        //suffix Max
        vector<int> suffmax(n);
        suffmax[n-1] = height[n-1];

        for(int i = n-2; i >= 0; i--) {
            suffmax[i] = max(suffmax[i+1], height[i]);
        }
        //Main logic
        int total=0;
        // cout << premax.size() << " " << suffmax.size();
        for(int i=0; i<n; i++){
            total += min(premax[i],suffmax[i]) - height[i];
        }

        return total;
    }
};