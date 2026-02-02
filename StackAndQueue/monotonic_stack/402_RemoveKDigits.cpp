class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> mono;
        mono.push(num[0]);
        for(int i = 1; i < num.size(); i++){
            while(k > 0 && !mono.empty() && mono.top() > num[i]){
                mono.pop();
                k--;
            }
            mono.push(num[i]);
        }
        while(k > 0 && !mono.empty()){
            mono.pop();
            k--;
        }
        string res = "";
        while(!mono.empty()){
            res.push_back(mono.top());
            mono.pop();
        }

        reverse(res.begin(), res.end());

        int i = 0;
        while(i < res.size() && res[i] == '0'){
            i++;
        }

        res = res.substr(i);

        return (res == "")? "0" : res;
    }
};