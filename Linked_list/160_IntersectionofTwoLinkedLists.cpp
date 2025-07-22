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