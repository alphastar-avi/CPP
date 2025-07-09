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

node* delHead(node* head){
    if(head == nullptr) return head;
    node* move = head;
    node* temp = move;
    move = temp->next;
    delete temp;
    return move;

}

node* deltail(node* head){
    if(!head || !head->next) return head;
    node* temp = head;
    while(temp->next->next != nullptr){
        temp=temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

int main(){
vector<int> nums={2,3,4,5,6,7,8};
node* head = CreateNodeFromArray(nums);
node* notail = deltail(head);
// node* noHead = delHead(head);

trav(notail);
cout << endl;

size(head);
cout << endl;

if(search(head,43)) cout << "true";
else cout << "false";

}





