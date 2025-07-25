class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || k==0) return head;
        ListNode* tail = head;

        int cnt=1;
        while(tail->next){
            cnt++;
            tail=tail->next;
        }
        if(k%cnt==0) head;
        k = k%cnt;
        tail->next = head;
        
        int move = cnt-k;
        while(move>0){
            move--;
            tail=tail->next;
        }

        ListNode* newhead = tail->next;
        tail->next=nullptr;
        return newhead;

    }
};   
