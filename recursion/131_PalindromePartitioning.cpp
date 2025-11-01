class Solution {
public:
    void palindromePartitioning(string s,vector<vector<string>>& res,vector<string> curr,int index){
        // partition to the last
        if(index == s.length()){
            res.push_back(curr);
            return;
        }

        for(int i=index; i<s.size(); i++){
            //only insert if palindrome
            if(ispalindrome(s,index,i)){
                //substr (2,4) is from 2 including it +4 elements so we do for length x to y, we do y - x +1 tosh
                curr.push_back(s.substr(index, i - index + 1));
                palindromePartitioning(s,res,curr,i+1);
                curr.pop_back();
            }
        }

    } 

    bool ispalindrome(string s, int start, int last){
        while(start<last){
            if(s[start++]!=s[last--]){
                return false;
            }
        }
        return true;
    }

    vector<vector<string>> partition(string s) {
        vector<string> curr;
        vector<vector<string>> res;
        palindromePartitioning(s,res,curr,0);

        return res;
    }
};