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
    void reorderList(ListNode* head) { 
    
    //find mid
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
     slow->next = nullptr;

    //rev
    ListNode* curr = slow->next;
    ListNode* prev = nullptr;
    while(curr){
        ListNode* move = curr->next;
        curr->next = prev;
        prev = curr;
        curr = move;
    }
   
    //merge
    ListNode* first = head;
    ListNode* second = prev;
    while(second){
        ListNode* temp = second->next;
        second->next = first->next;
        first->next = second;
        second = temp;
        first = first->next->next;
    }
    
    }

    // //Recrusive
    // //base
    // if(!head || !head->next || !head->next->next) return;
    // ListNode* secondLast = head;

    // //task
    // while(secondLast->next->next){
    //     secondLast = secondLast->next;
    // }

    // secondLast->next->next = head->next;
    // head->next = secondLast->next;
    // secondLast->next = nullptr;

    // //recrusion relation
    // reorderList(head->next->next);
    // }

    //vector approach
//     class Solution {
// public:
//     void reorderList(ListNode* head) {
//         if(!head) return;

//         vector<ListNode*> vec;
//         ListNode* cur = head;
//         while(cur){
//             vec.push_back(cur);
//             cur = cur->next;
//         }

//         int i = 0, j = vec.size() - 1;
//         while(i < j){
//             vec[i]->next = vec[j];
//             i++;
//             if(i >=j) break;
//             vec[j]->next = vec[i];
//             j--;
//         }
//         vec[j]->next = nullptr;
//     }
// };
};