/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
    vector<int> res;
    if (!root) return res;

    stack<TreeNode*> stk;
    stk.push(root);

    while (!stk.empty()) {
        TreeNode* node = stk.top(); stk.pop();
        res.push_back(node->val);               

        if (node->right) stk.push(node->right); 
        if (node->left) stk.push(node->left);   
    }

    return res;
}
 
    // vector<int> result;
    // preorder(root, result);
    // return result;
    // }

    // void preorder(TreeNode* node, vector<int>& result) {
    //     if (node == nullptr) return;
    //     result.push_back(node->val);              
    //     preorder(node->left, result);             
    //     preorder(node->right, result);           
    // }
};