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