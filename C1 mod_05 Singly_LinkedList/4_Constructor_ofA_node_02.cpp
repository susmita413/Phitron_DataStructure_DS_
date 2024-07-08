#include <bits/stdc++.h>
using namespace std;

class Singly_node {
public:
    int val;
    Singly_node* next;

    Singly_node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

int main() {
    Singly_node a(10);
    Singly_node b(20);
    Singly_node c(30);

    // Linking the nodes with "next" pointer
    a.next = &b;
    b.next = &c;

    Singly_node *cur_node = &a ;   //pinting 1st node
    while(cur_node != NULL){
        //cout << cur_node->val << " " ;   // print node's value
        cout << (*cur_node).val << " " ;

        cur_node = cur_node->next ;        // pointer samne jabe.
    }
    cout << endl;


    return 0;
}
