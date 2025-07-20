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