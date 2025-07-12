#include <stack>

ListNode* reverseListUsingStack(ListNode* head) {
    std::stack<ListNode*> s;
    ListNode* temp = head;

    while (temp) {
        s.push(temp);
        temp = temp->next;
    }

    if (s.empty()) return nullptr;
    ListNode* newHead = s.top(); s.pop();
    temp = newHead;

    while (!s.empty()) {
        temp->next = s.top(); s.pop();
        temp = temp->next;
    }
    temp->next = nullptr;
    return newHead;
}

//Iterative

ListNode* reverseListIterative(ListNode* head) {
    ListNode* temp = head;
    ListNode* prev = nullptr;
    while (temp) {
        ListNode* move = temp->next;
        temp->next = prev;
        prev = temp;
        temp = move;
    }
    return prev;
}

//Recrusive

ListNode* reverseListRecursive(ListNode* head) {
    if (!head || !head->next) return head;
    ListNode* newHead = reverseListRecursive(head->next);
    head->next->next = head;
    head->next = nullptr;
    return newHead;
}
