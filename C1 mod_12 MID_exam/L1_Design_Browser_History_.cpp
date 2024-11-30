class BrowserHistory {
public:
    class Doubly_node{
    public:
        string val;
        Doubly_node* next ;
        Doubly_node* prev ;
        Doubly_node (string val){
            this->val= val;
            this->next = NULL ;
            this->prev= NULL ;
        }
    };

    Doubly_node *cur = new Doubly_node("") ;

    BrowserHistory(string homepage) {
        cur->val = homepage ;
    }
    
    void visit(string url) {
        Doubly_node *newNode= new Doubly_node(url);
        cur->next = newNode;
        newNode->prev= cur ;
        cur = newNode ;
    }
    
    string back(int steps) {
        for(int i=1; i<=steps; i++){
            if(cur->prev != NULL){
                cur = cur->prev;
            }
        }
        return cur->val ;
    }
    
    string forward(int steps) {
        for(int i=1; i<=steps; i++){
            if(cur->next != NULL){
                cur = cur->next;
            }
        }
        return cur->val ;
    }
};

