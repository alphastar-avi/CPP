#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


int dp(TreeNode* node) {
    if (!node) return 0;
    int ln = dp(node->left);
    if (ln == -1) return -1;
    int rn = dp(node->right);
    if (rn == -1) return -1;
    if (abs(ln - rn) > 1) return -1;
    return 1 + max(ln, rn);
}

bool isBalanced(TreeNode* root) {
    return dp(root) != -1;
}

int main() {

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);

    if (isBalanced(root)) {
        cout << "The tree is balanced." << endl;
    } else {
        cout << "The tree is not balanced." << endl;
    }

    delete root->left->left;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
