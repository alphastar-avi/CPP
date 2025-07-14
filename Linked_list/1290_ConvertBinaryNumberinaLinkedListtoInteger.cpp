class Solution {
public:
    int getDecimalValue(ListNode* head) {
        if(!head) return 0;
        long long res=0;
        ListNode* temp = head;
        while(temp){
            res = res*2 + (temp->val);
            temp=temp->next;
        }
        return res;
        
    }
};`