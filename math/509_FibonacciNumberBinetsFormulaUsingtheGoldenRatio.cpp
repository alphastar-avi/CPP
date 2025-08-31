#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    int fib(int n) {
        double phi = (1 + sqrt(5)) / 2.0;
        double psi = (1 - sqrt(5)) / 2.0;
        return round((pow(phi, n) - pow(psi, n)) / sqrt(5));
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "F(" << n << ") = " << sol.fib(n) << endl;
    return 0;
}
