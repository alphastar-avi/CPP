class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     ListNode* newhead = new ListNode(-1);
     ListNode* temp = newhead;

    int carry=0, sum;
     while(l1 || l2){
        sum = carry;
        if(l1){
            sum += l1->val;
            l1=l1->next;
        }
        if(l2){
            sum += l2->val;
            l2=l2->next;
        }
        temp->next = new ListNode(sum%10);
        temp = temp->next;
        carry = sum/10;
     }
     if(carry){
        temp->next = new ListNode(carry);
     }
     return newhead->next;
    }
};