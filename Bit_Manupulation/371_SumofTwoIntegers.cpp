class Solution {
public:
    int getSum(int a, int b) {
        int carry = a&b;
        int sum = a^b;
        int actCarry = carry << 1;
        while(carry){
            carry = sum&actCarry;
            sum = sum^actCarry;
            actCarry = carry << 1;
            
        }
        return sum;

    }
};

class Solution {
public:
    int getSum(int a, int b) {

        return (b==0)? a : getSum(a^b, (a&b)<<1);
    }
}

class Solution {
public:
    int getSum(int a, int b) {
        while(b!=0){
            int temp=a;
            a ^= b;
            b = (temp&b)<<1;
        }
        return a;
    }
};
