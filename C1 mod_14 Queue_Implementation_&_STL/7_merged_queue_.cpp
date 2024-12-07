#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q1;
    queue<int> q2;

    int n; cin>>n ;
    for(int i=0; i<n; i++){ 
        int x;
        cin>> x;
        q1.push(x);          //take input in q1
    }

    int m; cin>>m ;
    for(int i=0; i<m; i++){
        int x;
        cin>> x;
        q2.push(x);         //take input in q2
    }

    queue<int> mq,cq2;
    mq = q1;            // copy from q1 to mq(merged queue)
    cq2 = q2;           // copy from q2 to cq2 (I don't want to delete q2)
    while(!cq2.empty()){
        mq.push(cq2.front());
        cq2.pop();
    }                    // merge done
    
    while(!mq.empty()){
        cout<< mq.front() <<" " ;  //print the merged queue
        mq.pop();
    }
    
    return 0 ;
}