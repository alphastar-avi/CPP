#include<iostream>
#include<queue>
#include<map>

using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : val(0), left(nullptr), right(nullptr){}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr){}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right){}
};

void topview(TreeNode* node){
    if(!node) return;
    map<int,int> mpp;
    queue<pair<TreeNode*,int>> q;

    q.push({node,0});
    while(!q.empty()){
        auto it = q.front(); q.pop();
        TreeNode* node = it.first;
        int v = it.second;

        mpp[v]= node->val;

        if(node->left) q.push({node->left,v-1});
        if(node->right) q.push({node->right,v+1});
    }
    for (auto it : mpp ){
        cout << it.second << "," ;
    }

}

int main(){
    TreeNode* node = new TreeNode(1, new TreeNode(3, new TreeNode(4), new TreeNode(5)), new TreeNode(3));
    topview(node);
}