#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "LVIII";
    int total = 0;
    int prev_value = 0;

    for (int i = s.length() - 1; i >= 0; i--) {
        int currentValue;

        switch (s[i]) {
            case 'I': currentValue = 1; break;
            case 'V': currentValue = 5; break;
            case 'X': currentValue = 10; break;
            case 'L': currentValue = 50; break;
            case 'C': currentValue = 100; break;
            case 'D': currentValue = 500; break;
            case 'M': currentValue = 1000; break;
            default: currentValue = 0; // optional: handle invalid characters
        }

        if (currentValue < prev_value) {
            total -= currentValue;
        } else {
            total += currentValue;
        }

        prev_value = currentValue;
    }

    cout << total << endl;
    return 0;
}
