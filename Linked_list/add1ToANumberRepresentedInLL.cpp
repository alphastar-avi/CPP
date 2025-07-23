#include<iostream>
#include<vector>

using namespace std;

struct node{
    int data;
    node* next;

    node(int data, node* val): data(data), next(val){}
    node(int data): data(data), next(nullptr){}
};

void print(node* head){
    node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int helper(node* head){
    if(!head) return 1;
    int carry = helper(head->next);

    head->data = head->data+carry;
    if(head->data < 10){
        return 0;
    }
    else{
        head->data = 0;
        return 1;
    }
}

int main(){
    node* head = new node(9, new node(9, new node(9, new node(9, new node(9, new node(9))))));
    int carry = helper(head);
    if(carry == 1){
        node* newhead = new node(1,head);
        //newhead->next = head;
        print(newhead);
    }
    else{
        print(head);
    }
}