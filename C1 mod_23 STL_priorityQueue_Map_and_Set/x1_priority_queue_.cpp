#include<bits/stdc++.h>
using namespace std;

void pr_queue_maxheap(){
    priority_queue<int> pq;
    while(true){
        int c; cin>>c ; //0= push, 1=delete, 2=show top, others= break
        switch(c){
            case 0:
                int val; cin>>val ;
                pq.push(val); //O(logN)
                break;
            case 1:
                cout<<"delete "<< pq.top()<< endl; //O(1)
                pq.pop();     //O(logN)
                break;
            case 2:
                cout<<"top= "<< pq.top()<< endl; //O(1)
                break;
            default:
                break;
        }
        if(c>2) break;
    }
}

int main(){
    pr_queue_maxheap();
    cout<<endl ;
    return 0 ;
}