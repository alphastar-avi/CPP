

// using vector O(n), O(n);
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k == 1) return head;

        vector<ListNode*> list;
        ListNode* temp = head;
        while(temp){
            list.push_back(temp);
            temp = temp->next;
        }
        // goes till the kth array , reverse it 
        for(int i=0; i+k<=list.size(); i += k){
            reverse(list.begin()+i, list.begin()+i+k); /** reverse(1st,2st) , the 2nd parameter is not incluse ( 1,2,3,4) start 1 , end 3 */
        }
        
        for (int i = 0; i < list.size() - 1; i++) {
            list[i]->next = list[i + 1];
        }
        list.back()->next = nullptr;

        return list[0];

    }
};