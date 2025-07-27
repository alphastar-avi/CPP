class BrowserHistory {
public:

    struct node{
        string url;
        node* prev;
        node* next;
        node(string url): url(url), prev(nullptr), next(nullptr){}
    };
    node* current;

    BrowserHistory(string homepage) {
        current = new node(homepage);
    }
    
    void visit(string url) {
            //  Delete forward history if it exists
        while (current->next) {
           node* temp = current->next;   // take next node
           current->next = temp->next;   // unlink it
           delete temp;                  // free memory
        }
        node* newnode = new node(url);
        current->next = nullptr;
        newnode->prev = current;
        current->next = newnode;
        current = newnode;

    }
    
    string back(int steps) {
        while(steps && current->prev){
            current = current->prev;
            steps--;
        }
        return current->url;
        
    }
    
    string forward(int steps) {
        while(steps && current->next){
            current = current->next;
            steps--;
        }
        return current->url;
        
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */