class Solution {
public:
    bool checkValidString(string s) {
        int low = 0, high = 0;
        for(char c : s) {
            if(c == '(') { low++; high++; }
            else if(c == ')') { low--; high--; }
            else { low--; high++; } // '*'
            if(high < 0) return false; // too many ')'
            if(low < 0) low = 0; // can't be negative
        }
        return low == 0;
    }
};

class Solution {
public:
    bool checkValidString(string s) {
        int low = 0, high = 0;
        for (char c : s) {
            if (c == '(') {
                low++;
                high++;
            } else if (c == ')') {
                low--;
                high--;
            } else { // '*'
                low--;   // assume '*' is ')'
                high++;  // assume '*' is '('
            }
            if (high < 0) return false; // too many ')'
            if (low < 0) low = 0;       // can't go negative
        }
        return low == 0;
    }
};
