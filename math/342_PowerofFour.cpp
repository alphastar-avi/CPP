class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        while(n%4==0){
            n=n/4;
        }
        return n==1;
    }
};
// class Solution {
// public:
//     bool isPowerOfFour(int n) {
//         long long res=1;
//         while(res<n){
//             res *= 4;
//         }
//         return res==n;
//     }
// };