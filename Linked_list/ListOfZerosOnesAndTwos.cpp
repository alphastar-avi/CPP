#include<iostream>

using namespace std;

struct node{
    int val;
    node* next;
    node(int x): val(x), next(nullptr){}
    node(int x, node* next): val(x), next(next){}
};

void print(node* head){
    node* temp = head;
    while(temp){
        cout << temp->val << endl;
        temp=temp->next;
    }
}

node* fix(node* head){
    node* temp = head;
    node* zerolink = new node(-1);
    node* zero = zerolink;

    node* onelink = new node(-1);
    node* one = onelink;

    node* twolink = new node(-1);
    node* two = twolink;

    while(temp){
        if(temp->val==0){
            zero->next = temp;
            zero = zero->next;
        }
        else if(temp->val==1){
            one->next = temp;
            one = one->next;
        }
        else if(temp->val==2){
            two->next = temp;
            two = two->next;
        }
        temp = temp->next;
    }

    zero->next = (onelink->next)? onelink->next : twolink->next;
    one->next = twolink->next;
    two->next = nullptr;


    return zerolink->next;

}

int main(){
    node* head = new node(1, new node(0, new node(2, new node(1, new node(0, new node(1))))));
    node* newhead = fix(head);
    print(head);
    cout << ""
    print(newhead);

}