#include<bits/stdc++.h>
using namespace std;

class myQueue{
public:
      list<int> l;
      void push(int val){     // tail insert
            l.push_back(val);
      }
      
      void pop(){             // head delete
            l.pop_front();
      }

      int front(){           // return head or front
            return l.front();
      }

      int size(){
            return l.size();
      }

      bool empty(){
            return l.empty(); // if the list or queue is empty, then return true
            // if(l.size()==0) return true;
            // else return false;
      }
};


int main(){
    myQueue q ;
    
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.pop();
//     cout << q.size() << endl ;
//     cout << q.front() << endl ;

      int n;
      cin>> n;
      for(int i=0; i<n; i++){      //O(n)
           int x;
           cin>> x;
           q.push(x);
      }
      cout <<endl<<"size: " << q.size() << endl ;
      cout <<"front: " << q.front() <<endl<< endl ;
    
      while(!q.empty()){       // print
           cout<< q.front() << endl ;
           q.pop();
      }
    
      if(q.empty())
           cout << "Queue is empty." ;

      return 0;

}
