class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int water=0,left=0,right=n-1,area;

        while(left < right){
            area = min(height[left],height[right])*(right-left);
            water = max(water,area);

            if(height[left] <= height[right]){
                left++;
            } else right--;
        }
        
        return water;

    }
};