#include<iostream>
#include<vector>

using namespace std;

struct node{
    int data;
    node* next;

    node(int data, node* val): data(data), next(val){}
    node(int data): data(data), next(nullptr){}
};

node* arrToLink(vector<int> &nums){
    node* head = new node(nums[0]);
    node* move = head;
    for(int i=1; i<nums.size(); i++){
        node* temp = new node(nums[i]);
        move->next = temp;
        move = temp;
    }
    return head;
}

void print(node* head){
    node* temp = head;
    while(temp){
        cout << temp->data;
        temp = temp->next;
    }
}

bool search(node* head, int x){
    node* temp = head;
    while(temp){
        if(temp->data == x){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void size(node* head){
    node* temp = head;
    int x=0;
    while(temp){
        x++;
        temp=temp->next;
    }
    cout << x;
}

int main(){
    vector<int> nums={1,2,3,4,5,6,7};
    node* head = arrToLink(nums);
    print(head);
    cout << endl;
    cout << search(head,4);
    cout<<endl;
    size(head);
    

    
}