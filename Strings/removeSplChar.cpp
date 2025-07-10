#include <iostream>
#include <string>
#include <cctype> // Required for the isalpha() function

int main() {
    // Set up fast input/output
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    // Read the entire line of input
    std::string s;
    std::getline(std::cin, s);

    std::string result = "";
    int alphabets_to_skip = 0;

    // Iterate through each character of the input string
    for (char c : s) {
        if (c == '*' || c == '$' || c == '#') {
            // If it's a special character, increment the skip counter
            alphabets_to_skip++;
        } else if (isalpha(c)) {
            // If it's an alphabetical character
            if (alphabets_to_skip > 0) {
                // And we need to skip letters, decrement the counter
                // and do not add the character to the result.
                alphabets_to_skip--;
            } else {
                // Otherwise, add the letter to the result.
                result += c;
            }
        } else {
            // For any other character (like spaces), add it directly to the result.
            result += c;
        }
    }

    // Print the final "excellent" string
    std::cout << result << std::endl;

    return 0;
}