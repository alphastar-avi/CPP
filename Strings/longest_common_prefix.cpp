#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    vector<string> strs = {"flower", "flow", "flight"};

    if (strs.empty()) {
        cout << "";
        return 0;
    }

    string pre = strs[0];

    for (int i = 1; i < strs.size(); i++) {
        int j = 0;
        while (j < strs[i].size() && j < pre.size() && pre[j] == strs[i][j]) {
            j++;
        }
        pre = pre.substr(0, j);
        if (pre.empty()) {
            cout << "";
            return 0;
        }
    }

    cout << pre;
    return 0;
}
