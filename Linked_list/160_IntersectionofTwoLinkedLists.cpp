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
    ListNode* h1 = headA;
    ListNode* h2 = headb;
    int c1=0,c2=0;
    while(h1){
        c1++;
        h1=h1->next;
    }
    while(h2){
        c2++;
        h2=h1->next;
    }
    if(c2>c1){
    return intersection(headA,headB,c2-c1);
    }
    else return intersection(headB,headA,c1-c2);
    }

    ListNode* intersection(ListNode* small, ListNode* big, int d){
        while(d){
            d--;
            big=big->next;
        }

        while(small && big){
            if(small==big){
                return small      
            }
            small = small->next;
            big = big->next;
        }
        return nullptr;
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