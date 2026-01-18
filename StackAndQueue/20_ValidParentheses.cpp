class Solution {
public:
    bool isValid(string s) {
        stack<char> ros;
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                ros.push(ch);
            } 
            else if (ch == ')' && !ros.empty() && ros.top() == '(') {
                ros.pop();
            } 
            else if (ch == '}' && !ros.empty() && ros.top() == '{') {
                ros.pop();
            } 
            else if (ch == ']' && !ros.empty() && ros.top() == '[') {
                ros.pop();
            } 
            else {
                return false;  
            }
        }
        return ros.empty();
    }
};
//OR
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (st.empty()) return false;

                char top = st.top();
                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[')) {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};

