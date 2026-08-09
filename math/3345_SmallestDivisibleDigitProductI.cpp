class Solution {
public:

    int digitproduct(int x){
        int ans=1;
        while(x!=0){
            ans *= x%10;
            x /= 10;
        }
        return ans;
    }

    int smallestNumber(int n, int t) {
        int prod;
        
        for(int i=0; i<=t; i++){
            prod = digitproduct(n);
            if(prod%t==0) return n;
            n++;
        }
        return 0;
    }
};

//
