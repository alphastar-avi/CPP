class Solution {
public:

ListNode* findKthNode(ListNode* temp, int k){
    k--;
    while( temp && k>0){
        temp=temp->next;
        k--;
    }
    return temp;
}

void reverseLL(ListNode* head){
    ListNode* temp = head;
    ListNode* prev = nullptr;
    while(temp){
        ListNode* move = temp->next;
        temp->next = prev;
        prev = temp;
       temp = move;
    }
}
    //Main
    ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode* temp = head;
    ListNode* prevLast = nullptr;
    while(temp){
        ListNode* KthNode = findKthNode(temp,k);
        if(KthNode == nullptr){
            if(prevLast) prevLast->next = temp;
            break;
        }
        ListNode* nextNode = KthNode->next;
        KthNode->next = nullptr;
        reverseLL(temp);
        if(temp == head){
            head = KthNode;
        }
        else{
            prevLast->next = KthNode;
        }
        prevLast = temp;
        temp = nextNode;
    }
    return head;
    }
};

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