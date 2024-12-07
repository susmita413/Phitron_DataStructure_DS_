#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    // q.push(100);
    // q.push(200);
    // q.push(300);
    // if(!q.empty()){
    //     cout<<"Queue isn't empty. front= " <<q.front() <<endl;
    //     cout<<"size= " << q.size() <<endl ;
    // }

    int n; cin>> n;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        q.push(x);
    }
    cout<<"front= " <<q.front() <<endl;
    cout<<"size= " << q.size() <<endl ;
    
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }

    if(q.empty()) cout<< "queue is empty."<<endl;
    
    
    return 0;

}