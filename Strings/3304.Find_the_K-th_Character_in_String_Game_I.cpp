#include <iostream>
#include <string>

int main() {
    int k;
    std::cin >> k;
    std::string sb = "a";
    while (sb.length() < k) {
        int size = sb.length();
        for (int i = 0; i < size; ++i) {
            char nextChar = 'a' + ((sb[i] - 'a' + 1) % 26);
            sb += nextChar;
        }
    }
    std::cout << sb[k - 1] << std::endl;
    return 0;
}
