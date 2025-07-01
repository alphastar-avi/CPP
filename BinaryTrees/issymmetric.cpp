#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return issymmetric(root->left, root->right);
    }
    bool issymmetric(TreeNode* leftnode, TreeNode* rightnode) {
        if (!leftnode && !rightnode) return true;
        if (!leftnode || !rightnode) return false;
        return (leftnode->val == rightnode->val &&
                issymmetric(leftnode->left, rightnode->right) &&
                issymmetric(leftnode->right, rightnode->left));
    }
};

int main() {
    // Sample symmetric tree:
    //        1
    //       / \
    //      2   2
    //     / \ / \
    //    3  4 4  3

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2, new TreeNode(3), new TreeNode(4));
    root->right = new TreeNode(2, new TreeNode(4), new TreeNode(3));

    Solution sol;
    bool result = sol.isSymmetric(root);

    cout << (result ? "true" : "false") << endl;

    // Clean up memory (not strictly necessary in small programs, but good practice)
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
