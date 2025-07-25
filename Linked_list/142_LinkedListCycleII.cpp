/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
    ListNode* temp = head;

    unordered_map<ListNode*,int>mpp;
    while(temp){
        if(mpp[temp]==1){
            return temp;
        }
        mpp[temp]++;
        temp=temp->next;
    }
    return nullptr;

    }
};