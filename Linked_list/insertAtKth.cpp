#include<iostream>
#include<vector>

using namespace std;

struct node{
    int data;
    node* next;

    node(int data, node* val): data(data), next(val){}
    node(int data): data(data), next(nullptr){}
};

node* create(vector<int> &nums){
    node* head = new node(nums[0]);
    node* move = head;
    for( int i=1; i<nums.size(); i++){
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

node* insertlink(node* head, int val,int k){
    if(!head){
        if(k==1){
            return new node(val);
        }
        else return head;
    }
    if(k==1){
        return new node(val,head);
    }
    int cnt=0;
    node* temp = head;
    while(temp){
        cnt++;
        if(cnt==(k-1)){
            node* x = new node(val,temp)
        }
    }
}


int main(){
vector<int> nums={1,2,3,4,5,6,7,8};
node* head = create(nums);
node* y = insertlink(head,60,4);
print(y);


}