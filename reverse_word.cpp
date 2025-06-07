#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string s = "who are we";
    stringstream ss(s);
    string word;

    vector<string> str;

    while (ss >> word) {
        str.push_back(word);
    }

    string out;
    for (int i = (int)str.size() - 1; i >= 0; i--) {
        out += str[i];
        if (i > 0) {
            out += " "; 
        }
    }

    cout << out << endl;

    return 0;
}
