#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        for(int x: tickets){
            q.push(x);
        }
        
        int time= 0 ;
        while(true){
            q.front()-- ; //1 person bought ticket
            time++ ;      // time increase

            if(k==0 && q.front()==0){  //person IN k POSITION, does not have any tickets left to buy
                break;
            }
            if(k==0)                  // person who is in k POSITION
               k= q.size()-1;         // HIS INDEX IS CHANGING
            else
               k--;

            if(q.front() != 0){ //a person does not have any tickets left to buy,leave the QUEUE.
                q.push(q.front());
            }
            q.pop(); // IN EVERY LOOP pop() WORK.
        }
        return time;
    }
};