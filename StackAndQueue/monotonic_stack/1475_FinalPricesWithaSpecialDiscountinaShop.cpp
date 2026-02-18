class Solution {
public:
    void makeNSE(vector<int>& prices, vector<int>& NSE){
        stack<int> st;
        for(int i=prices.size()-1; i>=0; i--){
            while(!st.empty() && st.top()>prices[i]) st.pop();
            if(!st.empty()) NSE[i] = st.top();
            st.push(prices[i]);
        }
    }

    vector<int> finalPrices(vector<int>& prices) {
        vector<int>NSE(prices.size(),0);
        vector<int> res;
        
        makeNSE(prices,NSE);
        for(int i=0; i<prices.size(); i++){
            res.push_back(prices[i]-NSE[i]);
        } 
        return res;   
    }
};