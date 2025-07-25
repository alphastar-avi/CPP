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
    ListNode* removeElements(ListNode* head, int val) {
        //Recrusive
    if(!head) return head;
    head->next = removeElements(head->next, val);
    
    if(head->val  == val){
        return head->next;
    } 

    return head;
    
        // //Iterative
    //  while(head && head->val==val){
    //         head=head->next;
    //  }
    // ListNode* curr = head;
    // while(curr && curr->next){
    //     if(curr->next->val == val){
    //         curr->next=curr->next->next;
    //     }
    //     else curr = curr->next;
    // }
    // return head;
    }

};