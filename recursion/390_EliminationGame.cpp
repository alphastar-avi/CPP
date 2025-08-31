class Solution {
public:

    int lastRemaining(int n) {
        return f(n);
    }

    int f(int n) {
        if (n == 1) return 1;
        return 2 * g(n / 2);
    }

    int g(int n) {
        if (n == 1) return 1;
        if (n % 2 == 0) return 2 * f(n / 2) - 1;
        else return 2 * f(n / 2);
    }
};