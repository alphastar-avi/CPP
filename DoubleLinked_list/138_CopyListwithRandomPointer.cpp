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
    void Insertnode(Node* head){
        Node* temp = head;
        while(temp){
            Node* copy = new Node(temp->val);
            copy->next = temp->next;
            temp->next = copy;
            temp = copy->next;  
        }
    }

    void Copyrandom(Node* head){
        Node* temp = head;
        while(temp){
            Node* copynode = temp->next;
            if(temp->random)
                copynode->random = temp->random->next;
            else
                copynode->random = nullptr;
            temp = temp->next->next;
        }
    }

    Node* Deepcopy(Node* head){
        Node* temp = head;
        Node* dummy = new Node(-1);
        Node* res = dummy;

        while(temp){
            res->next = temp->next;
            res = res->next;
            temp->next = temp->next->next;  
            temp = temp->next;
        }
        return dummy->next;
    }

    Node* copyRandomList(Node* head) {
        if(!head) return nullptr;
        Insertnode(head);
        Copyrandom(head);
        return Deepcopy(head);
    }
};


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