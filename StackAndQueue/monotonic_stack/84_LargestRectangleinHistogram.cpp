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

//revise
class Solution {
public:

    void makeNSE(vector<int>& heights,vector<int>& NSE){
        stack<int> mono;

        for(int i=heights.size()-1; i>=0; i--){
            while(!mono.empty() && heights[mono.top()] >= heights[i]) mono.pop();
            NSE[i]=!mono.empty()? mono.top() : heights.size();
            mono.push(i);
        }
    }

    void makePSE(vector<int>& heights,vector<int>& PSE){
        stack<int> mono;

        for(int i=0; i<heights.size(); i++){
            while(!mono.empty() && heights[mono.top()] >= heights[i]) mono.pop();
            PSE[i]=!mono.empty()? mono.top() : -1;
            mono.push(i);
        }
    }

    int largestRectangleArea(vector<int>& heights) {
        int total=0;
        vector<int> NSE(heights.size());
        vector<int> PSE(heights.size());

        makeNSE(heights,NSE);
        makePSE(heights,PSE);

        for(int i=0; i<heights.size(); i++){
            total = max(heights[i] * (NSE[i]-PSE[i]-1), total);
        }
        return total;
    }
};