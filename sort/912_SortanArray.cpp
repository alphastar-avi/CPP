class Solution {
public:

    void mergesort(vector<int>&nums,int l,int h){
    if (l >= h) return;

    int m = (l+h)/2;
    mergesort(nums,l,m);
    mergesort(nums,m+1,h);
    merge(nums,l,m,h);
    }

    void merge(vector<int>&nums,int l,int m,int h){
    vector<int> mer;
    int i=l,j=m+1;

    while(i<=m && j<=h){
        if(nums[i]<nums[j]){
            mer.push_back(nums[i]);
            i++;
        }
        else{
            mer.push_back(nums[j]);
            j++;
        }

    }
    while(i<=m){
        mer.push_back(nums[i]);
        i++;
    }
    while(j<=h){
        mer.push_back(nums[j]);
        j++;
    } 
    for(int k=0; k<mer.size(); k++){
        nums[k+l]=mer[k];
    }

    }

    vector<int> sortArray(vector<int>& nums) {
        int l=0;
        int h = nums.size()-1;
        mergesort(nums,l,h);
        return nums;
    }
};