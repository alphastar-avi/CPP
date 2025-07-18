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
