class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || k==0) return head;
        ListNode* tail = head;

        int cnt=1;
        while(tail->next){
            cnt++;
            tail=tail->next;
        }
        if(k%cnt==0) head;
        k = k%cnt;
        tail->next = head;
        
        int move = cnt-k;
        while(move>0){
            move--;
            tail=tail->next;
        }

        ListNode* newhead = tail->next;
        tail->next=nullptr;
        return newhead;

    }
};   

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        vector<ListNode*> list;
        ListNode* temp = head;
        while (temp) {
            list.push_back(temp);
            temp = temp->next;
        }

        int n = list.size();
        k = k % n;
        if (k == 0) return head;
        
        std::rotate(list.begin(), list.begin() + (n - k), list.end());

        for (int i = 0; i < n - 1; i++) {
            list[i]->next = list[i + 1];
        }
        list.back()->next = nullptr;
        return list[0];
    }
};