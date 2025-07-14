class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp = head;
        unordered_map<ListNode*,int> mpp;

        int cnt=0;
        while(temp){
            cnt++;
            if(mpp[temp]==1){
                return true;
            }
            mpp[temp]++;
            temp=temp->next;
        }
        return false;
    }
};

OR Effencient one 
If any two pointer moves at differnet speed they must meet eachother in a cyclic system
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         while(fast && fast->next){
//             slow = slow->next;
//             fast = fast->next->next;
//             if(fast==slow) return true;
//         }
//         return false;
//     }
// };