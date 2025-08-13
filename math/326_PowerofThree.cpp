class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        return 1162261467%n==0;
    // long long res=1;
    // while(res<n){
    //     res *= 3;
    // }
    // return res==n;
    }
};