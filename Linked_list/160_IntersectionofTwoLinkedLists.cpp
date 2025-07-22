class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* l1 = headA;
        ListNode* l2 = headB;

        while(l1 != l2){
            l1 = l1->next;
            l2 = l2->next;

            if(l1==l2) return l1;
            if(!l1) l1 = headB;
            if(!l2) l2 = headA;
        }
        return l1;
    }
};



class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*, int> mpp;
        ListNode* HA = headA;
        ListNode* HB = headB;

        while(HA){
            if(mpp[HA] == 1){
                return HA;
            }
            mpp[HA]++;
            HA = HA->next;
        }

        while(HB){
            if(mpp[HB] == 1){
                return HB;
            }
            mpp[HB]++;
            HB = HB->next;
        }
        return nullptr;
        
    }
};