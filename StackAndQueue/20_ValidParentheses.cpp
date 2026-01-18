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
