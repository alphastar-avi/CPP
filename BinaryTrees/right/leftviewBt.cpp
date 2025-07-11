#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void rightSideViewHelper(TreeNode* node, int level, vector<int>& res) {
    if (!node) return;
    if (level == res.size()) res.push_back(node->val);
    rightSideViewHelper(node->right, level + 1, res);
    rightSideViewHelper(node->left, level + 1, res);
}

vector<int> rightSideView(TreeNode* root) {
    vector<int> res;
    rightSideViewHelper(root, 0, res);
    return res;
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(10);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(9);
    root->right->right = new TreeNode(11);

    vector<int> view = rightSideView(root);
    for (int val : view) cout << val << " ";
    cout << endl;

    return 0;
}
