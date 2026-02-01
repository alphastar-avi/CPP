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

    int sumSubarrayMins(vector<int>& arr) {
        vector<int> NSEE(arr.size()), PSEE(arr.size());

        long total=0; 
        long left,right;
        long mod = 1e9+7;

        MakeNSE(NSEE,arr);
        MakePSE(PSEE,arr);

        for(int i=0; i<arr.size(); i++){
            left = i-PSEE[i];
            right = NSEE[i]-i;
            
            total += ((left*right*1LL)%mod*arr[i])%mod;
        }
        return total%mod;

    }
};