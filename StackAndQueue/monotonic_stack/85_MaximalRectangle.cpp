class Solution {
public:
    void MakeNSE(vector<int>& NSE, vector<int>& arr) {
        stack<int> st;
        int n = arr.size();

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i])
                st.pop();
            NSE[i] = st.empty() ? n : st.top();
            st.push(i);
        }
    }

    void MakePSE(vector<int>& PSE, vector<int>& arr) {
        stack<int> st;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] >= arr[i])
                st.pop();
            PSE[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
    }

    int hist(vector<int>& heights) {
        int n = heights.size();
        vector<int> NSE(n), PSE(n);

        MakeNSE(NSE, heights);
        MakePSE(PSE, heights);

        int res = 0;
        for (int i = 0; i < n; i++) {
            int width = NSE[i] - PSE[i] - 1;
            res = max(res, width * heights[i]);
        }
        return res;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty()) return 0;

        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<int> heights(cols);
        int area = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == '1')
                    heights[j] += 1;
                else
                    heights[j] = 0;
            }
            area = max(area, hist(heights));
        }
        return area;
    }
};