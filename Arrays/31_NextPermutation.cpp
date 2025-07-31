class Solution {
public:
void nextPermutation(vector<int>& nums) {
    int index = -1;
    // 1. Find first drop from right
    for(int i = nums.size() - 2; i >= 0 ; i--){
        if(nums[i] < nums[i+1]){
            index = i;
            break;
        }
    }

    // 2. If array is already biggest (fully descending)
    if(index == -1){
        reverse(nums.begin(), nums.end());
        return;
    }

    // 3. Find next bigger element on right & swap
    for(int i = nums.size()-1; i > index; i--){
        if(nums[i] > nums[index]){
            swap(nums[i], nums[index]);
            break;
        }
    }

    // 4. Reverse right side to make it smallest
    reverse(nums.begin()+index+1, nums.end());
}

};