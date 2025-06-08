#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "abcde";
    string goal = "cdeab";

    if (s.length() != goal.length()) {
        cout << "false" << endl;
        return 0;
    }

    string t = s + s;

    if (t.find(goal) == string::npos) {
        cout << "false" << endl;
        return 0;
    }

    cout << "true" << endl;
    return 0;
}
