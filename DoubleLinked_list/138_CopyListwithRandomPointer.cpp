/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/




class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*,Node*> mpp;
        Node* temp = head;

        while(temp){
            Node* newnode = new Node(temp->val);
            mpp[temp] = newnode;
            temp = temp->next;
        }
        temp = head;

        while(temp){
            Node* dummy = mpp[temp];
            // mpp[temp]->next = mpp[temp->next];
            // mpp[temp]->random = mpp[temp->random];
            //The dummy variable is not logically required; it’s just a convenience.
            dummy->next = mpp[temp->next];      
            dummy->random = mpp[temp->random];
            temp=temp->next;
            
        }
        return mpp[head];
    }
};