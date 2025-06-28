#include<iostream>
#include<stack>

using namespace std;

struct Tree {
    int val;
    Tree* left;
    Tree* right;
    Tree() : val(0), left(nullptr), right(nullptr){}
    Tree(int x) : val(x), left(nullptr), right(nullptr){}
    Tree( int x, Tree* left, Tree* right ) : val(x), left(left), right(right){}
};

void inorder(Tree* node){
    stack<Tree*> stk;
    while(node || !stk.empty()){
        while(node){
            stk.push(node);
            node = node->left;
        }
        node = stk.top(); stk.pop();
        cout << node->val;
        node = node->right;
    }
}

int main(){
    Tree* node = new Tree( 1, new Tree(2), new Tree(3));

    inorder(node);
}
