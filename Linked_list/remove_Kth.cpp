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

node* kthElem(node* head,int x){
    if(x==1){
        node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int count=0;
    node* temp = head;
    node* prev = nullptr;
    while(temp){
        count++;
        if(count==x){
        prev->next = prev->next->next;
        delete temp;
        break;
    }
    prev = temp;
    temp = temp->next;
    }
    return head;
}


int main(){
    vector<int> nums={1,2,3,4,5,6,7};
    node* head = arrToLink(nums);
    int x;
    cin >> x;
    node* rm = kthElem(head,x);

    print(rm);

}