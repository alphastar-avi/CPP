#include <vector>
#include <iostream>
#include <queue>
using namespace std;

struct Tree {
    int val;
    Tree* left;
    Tree* right;
    Tree() : val(0), left(nullptr), right(nullptr) {}
    Tree(int val) : val(val), left(nullptr), right(nullptr) {}
    Tree(int x, Tree* left, Tree* right) : val(x), left(left), right(right) {}
};

void levelOrder(Tree* node) {
    if (!node) return;
    queue<Tree*> q;
    vector<vector<int>> res;

    q.push(node);
    while (!q.empty()) {
        vector<int> level;
        int nodelevel = q.size();

        for (int i = 0; i < nodelevel; i++) {
            Tree* curr = q.front(); q.pop();
            level.push_back(curr->val);
            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }
        res.push_back(level);
    }

    for (const auto& lvl : res) {
        for (int v : lvl) cout << v << " ";
        cout << endl;
    }
}

int main() {
    Tree* node = new Tree(1, new Tree(2, new Tree(3), new Tree(4)), new Tree(5, new Tree(6), new Tree(7)));
    levelOrder(node);
    return 0;
}