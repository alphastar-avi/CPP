/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
ListNode* removeNthFromEnd(ListNode* head, int n) {
vector<ListNode*> list;
ListNode* temp = head;
while(temp){
    list.push_back(temp);
    temp=temp->next;
}
int size = list.size();
if(n==size){
 head = head->next;
 return head;
}

ListNode* prev = list[size-n-1];
ListNode* delnode = list[size-n];
prev->next = delnode->next;
delete(delnode);
return head;
}

};

// Iterative
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* slow = head;
    ListNode* fast = head;
    for( int i=0; i<n; i++){
        fast = fast->next;
    }
    if (!fast) {
        ListNode* newHead = head->next;
        delete head;
        return newHead;
    }

    while(fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    ListNode* delnode = slow->next;
    slow->next = delnode->next;
    delete delnode;
    return head;



// vector<ListNode*> list;
// ListNode* temp = head;
// while(temp){
//     list.push_back(temp);
//     temp=temp->next;
// }
// int size = list.size();
// if(n==size){
//  head = head->next;
//  return head;
// }

// ListNode* prev = list[size-n-1];
// ListNode* delnode = list[size-n];
// prev->next = delnode->next;
// delete(delnode);
// return head;
}

};

