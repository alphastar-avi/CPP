class Solution {
public:
    string smallestPalindrome(string s) {
        string left = s.substr(0,(s.size())/2);
        ranges::sort(left);

        string right=left;
        ranges::reverse(left);

        return (s.size()%2!=0)? right+s[s.size()/2]+left : right+left; 
    }
};