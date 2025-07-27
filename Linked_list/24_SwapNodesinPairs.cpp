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
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode* start = head->next; 
        ListNode* prev = nullptr;
        ListNode* temp = head;

        while (temp && temp->next) {
            ListNode* move = temp->next;   

            ListNode* nextPair = move->next; 

            move->next = temp;
            temp->next = nextPair;

            if (prev) prev->next = move;
            prev = temp;
            temp = nextPair;
        }

        return start;
    }
};