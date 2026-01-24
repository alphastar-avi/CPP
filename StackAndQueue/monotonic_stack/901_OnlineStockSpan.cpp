class StockSpanner {
public:
    int ind = -1;
    stack<pair<int,int>> st;

    StockSpanner() {}

    int next(int price) {
        ind++;
        while (!st.empty() && st.top().first <= price)
            st.pop();

        int res = st.empty() ? ind + 1 : ind - st.top().second;

        st.push({price, ind});
        return res;
    }
};

class StockSpanner {
public:
    vector<int> res;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int count=1;
        res.push_back(price);
        for(int i=res.size()-2; i>=0; i--){
            if(res[i]<=price){
                count++;
            } else break;
        }
        return count;
    }
};