#include<bits/stdc++.h>
using namespace std;

void pr_queue_maxheap(){
    priority_queue<int> pq;
    while(true){
        int c; cin>>c ; //0= push, 1=delete, 2=show top, others= break
        if(c==0){
            int val; cin>>val ;
            pq.push(val); //O(logN)
        }
        else if(c==1){
            cout<<"delete "<< pq.top()<< endl; //O(1)
            pq.pop();     //O(logN)
        }
        else if(c==2){
            cout<<"top= "<< pq.top()<< endl; //O(1)
        } 
        else break;      
    }
}

void pr_queue_minheap(){
    priority_queue<int,vector<int>,greater<int> > pq;
    while(true){
        int c; cin>>c ; //0= push, 1=delete, 2=show top, others= break
        if(c==0){
            int val; cin>>val ;
            pq.push(val); //O(logN)
        }
        else if(c==1){
            cout<<"delete "<< pq.top()<< endl; //O(1)
            pq.pop();     //O(logN)
        }
        else if(c==2){
            cout<<"top= "<< pq.top()<< endl; //O(1)
        } 
        else break;      
    }
}

int main(){
    pr_queue_maxheap();
    cout<<endl <<"enter for minheap"<<endl;
    pr_queue_minheap();
    cout<<endl; 
    
    return 0 ;
}