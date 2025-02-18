#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, val;
    string name;
    queue<string> q;

    cin>> t;
    for(int i=1; i<=t; i++){
        cin>> val ;
        if(val==0){
            cin>>name;
            q.push(name);
        }
        else{
            if(!q.empty()){
                cout<< q.front() <<endl;
                q.pop();
            }
            else{
                cout<<"Invalid" <<endl;
            }
        }
    }

    return 0 ;
}