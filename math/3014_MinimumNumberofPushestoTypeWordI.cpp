class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int ans=0, i=1;
        int ussy;
        while(n>0){
            ussy = (n-8>=0)? 8 : (n%8); //or min(n,8)
            ans+=(ussy)*i;
            i+=1;
            n-=8;
        }
        return ans;
    }
};