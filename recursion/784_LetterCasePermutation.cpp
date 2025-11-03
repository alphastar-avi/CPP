class Solution {
public:

    void Lcp(vector<string>& res,string path,string s,int i){
        if(path.size()==s.size()){
            res.push_back(path);
            return;
        }
        //get the element 
        char ch = s[i];
        if(isalpha(ch)){

            //include the element with lower case
            path.push_back(tolower(ch));
            Lcp(res,path,s,i+1);
            path.pop_back();

            //include the element with upper case
            path.push_back(toupper(ch));
            Lcp(res,path,s,i+1);
            path.pop_back();

        } else{
            //if numeric add
            path.push_back(ch);
            Lcp(res,path,s,i+1);
            path.pop_back();
        }
    }

    vector<string> letterCasePermutation(string s) {
        string path;
        vector<string> res;
        Lcp(res,path,s,0);

        return res;
    }
};