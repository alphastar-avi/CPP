#include<iostream>
#include<vector>

using namespace std;

struct node{
    int data;
    node* next;

    node(int data1, node* next1): data(data1), next(next1){}
    node(int data1): data(data1), next(nullptr){}
};

node* CreateNodeFromArray(vector<int> &nums){
    node* head = new node(nums[0]);
    node* move = head;
    for(int i=1; i<nums.size(); i++){
        node* temp = new node(nums[i]);
        move->next = temp;
        move = temp;
    }
    return head;
}

void trav(node* head){
    node* temp = head;
    while(temp){
        cout << temp->data << ",";
        temp = temp->next;
    }
}

int size(node* head){
    node* temp = head;
    int cnt=0;
    while(temp){
        cout << temp->data << ",";
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

bool search(node* head, int x){
    node* temp = head;
    while(temp){
    if(temp->data == x) return true;
    temp = temp->next;
    }
    return false;

}

int main(){
vector<int> nums={2,3,4,5,6,7,8};
node* head = CreateNodeFromArray(nums);
trav(head);
cout << endl;

size(head);
cout << endl;

if(search(head,43)) cout << "true";
else cout << "false";

}