class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int> res(n,0);
        stack<pair<int,int>> mono;
        for(int i=n-1; i>=0; i--){
            while(!mono.empty() && mono.top().first <= temperatures[i]) mono.pop();      
            if(!mono.empty()) res[i]= mono.top().second - i;
            mono.push({temperatures[i],i});

        }
        return res;
    }
};