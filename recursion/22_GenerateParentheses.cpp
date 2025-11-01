class Solution {
public:

    void generatePara(int openpara,int closepara,int n,vector<string>& res,string curr){

        // if the close para and open para fills the N
        if(openpara==n && closepara==n){
            res.push_back(curr);
            return;
        }
        // add open para if its less than n
        if(openpara < n){
            generatePara(openpara+1, closepara, n, res, curr+'(');  
        }
        // add close para if its less than open para 
        if(closepara < openpara){
            generatePara(openpara, closepara+1, n, res, curr+')');
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string curr;
        // int openpara=0,closepara=0;
        generatePara(0, 0, n, res, curr);
        return res;
    }
};