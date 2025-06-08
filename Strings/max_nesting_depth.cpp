#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s = "(1+(2*3)+((8)/4))+1";  
    int sum = 0, count = 0;

    for (char i : s) {
        if (i == '(') {
            count++;
            sum = max(count, sum);
        }
        else if (i == ')') {
            count--;
        }
    }

    cout << sum;
    return 0;
}
