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

// non recrusive
// class Solution {
// public:
//     int lastRemaining(int n) {
//         int head = 1;
//         int step = 1;
//         int remaining = n;
//         bool left = true;
        
//         while (remaining > 1) {
//             if (left || (remaining % 2 == 1)) {
//                 head += step;
//             }
//             remaining /= 2;
//             step *= 2;
//             left = !left;
//         }
//         return head;
//     }
// };