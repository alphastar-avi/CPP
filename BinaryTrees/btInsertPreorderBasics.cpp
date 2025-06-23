#include <iostream>
using namespace std;

// Define the node structure
struct Node {
    int key;
    Node* left;
    Node* right;
};

// Create a new node
Node* createNode(int key) {
    Node* newNode = new Node;
    newNode->key = key;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

// Preorder traversal (Root → Left → Right)
void preorder(Node* root) {
    if (root == nullptr) return;
    cout << root->key << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    // Manually building the tree
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    cout << "Preorder Traversal: ";
    preorder(root);  

    return 0;
}

// or with constructor

// #include <iostream>
// using namespace std;

// struct TreeNode {
//     int val;
//     TreeNode* left;
//     TreeNode* right;

//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
// };

// void preorder(TreeNode* root) {
//     if (!root) return;
//     cout << root->val << " ";
//     preorder(root->left);
//     preorder(root->right);
// }

// int main() {
//     TreeNode* root = new TreeNode(1);
//     root->left = new TreeNode(2);
//     root->right = new TreeNode(3);
//     root->left->left = new TreeNode(4);
//     root->left->right = new TreeNode(5);
//     // or
//     // TreeNode* root = new Node(1, new Node(2, new Node(4), new Node(5)), new Node(3));

//     cout << "Preorder Traversal: ";
//     preorder(root);

//     return 0;
// }
