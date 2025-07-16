class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> listVals;
        while (head) {
            listVals.push_back(head->val);
            head = head->next;
        }

        int left = 0, right = listVals.size() - 1;
        while (left < right) {
            if (listVals[left] != listVals[right]) return false;
            left++;
            right--;
        }
        return true;

    //     //O(1) space
    //     ListNode* reverse(ListNode* head) {
    //     ListNode* prev = nullptr;
    //     ListNode* curr = head;
    //     while (curr != nullptr) {
    //         ListNode* next = curr->next;
    //         curr->next = prev;
    //         prev = curr;
    //         curr = next;
    //     }
    //     return prev;
    // }
    
    // bool isPalindrome(ListNode* head) {
    //     ListNode* slow = head;
    //     ListNode* fast = head;
    //     while (fast != nullptr && fast->next != nullptr) {
    //         slow = slow->next;
    //         fast = fast->next->next;
    //     }
    //     ListNode* rev = reverse(slow);
    //     while (rev != nullptr) {
    //         if (head->val != rev->val) {
    //             return false;
    //         }
    //         head = head->next;
    //         rev = rev->next;
    //     }
    //     return true;
    // }
    }
};
