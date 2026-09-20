class Solution {
public:
    int reverseDegree(string s) {
        int revdeg=0;

        for(int i=0; i<s.length(); i++){
            revdeg += ('z'-s[i]+1) * (i+1);
        }
        return revdeg;
    }
};

