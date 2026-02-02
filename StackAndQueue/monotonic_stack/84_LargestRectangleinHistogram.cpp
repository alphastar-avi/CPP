class Solution {
public:
    void MakeNSE(vector<int> &NSEE, vector<int> &arr){
        stack<int> NSE;

        for(int i=arr.size()-1; i>=0; i--){
            while(!NSE.empty() && arr[NSE.top()] >= arr[i]) NSE.pop();
            NSEE[i] = NSE.empty()? arr.size() : NSE.top();
            NSE.push(i);
        }    

    }
    void MakePSE(vector<int> &PSEE, vector<int> &arr){
        stack<int> PSE;

        for(int i=0; i<arr.size(); i++){
            while(!PSE.empty() && arr[PSE.top()] > arr[i]) PSE.pop();
            PSEE[i] = PSE.empty()? -1 : PSE.top();
            PSE.push(i);
        }    

    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int>NSE(heights.size()),PSE(heights.size());
        
        MakeNSE(NSE,heights);
        MakePSE(PSE,heights);

        int res=INT_MIN;

        for(int i=0; i<heights.size(); i++){
            int right = NSE[i]-i;
            int left = i-PSE[i];
            res = max(res,((right+left-1)*heights[i]));
        }
        return res;
    }
};