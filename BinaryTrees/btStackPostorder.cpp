#include<iostream>
#include<vector>
#include<stack>

struct tree{
    int val;
    tree* left;
    tree* right;
    tree() : val(0), left(nullptr), right(nullptr){}
    tree(int x) : val(x), left(nullptr), right(nullptr){}
    tree(int x, tree* left, tree* right): val(x), left(left), right(right){}
};
void postorder(tree* node){
    std::stack<tree*> s1,s2;
    s1.push(node);

    while(!s1.empty()){
        tree* node = s1.top(); s1.pop();
        s2.push(node);

        if( node->left) s1.push(node->left);
        if( node->right) s1.push(node->right);
    }

    while(!s2.empty()){
        std::cout << s2.top()->val << " ";
        s2.pop();
    }
}

int main(){
    tree* node = new tree(1, new tree(2, new tree(3), new tree(4)), new tree(5, new tree(6), new tree(7)));
    postorder(node);
}


