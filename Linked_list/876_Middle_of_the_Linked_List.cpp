class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};

OR

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int count = 0;

        while (temp) {
            count++;
            temp = temp->next;
        }

        int mid = count / 2;
        temp = head;
        int c2 = 0;
        while (temp) {
            if (c2 == mid) return temp;
            c2++;
            temp = temp->next;
        }

        return nullptr; // fallback, should never hit
    }
};

OR

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int count = 0;

        // First pass: count the number of nodes
        while (temp) {
            count++;
            temp = temp->next;
        }

        // Second pass: go to the middle node
        temp = head;
        int mid = count / 2; // if count is even, this gives the second middle
        for (int i = 0; i < mid; ++i) {
            temp = temp->next;
        }

        return temp;
    }
};


