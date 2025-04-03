#include<bits/stdc++.h>
using namespace std;

void sorted(int n){
    set<int> s;
    while(n--){
        int val;
        cin>>val;
        s.insert(val);
    }

    for(auto it= s.begin(); it!=s.end(); it++){
        cout<< *it<<" " ;
    }
    cout<<endl;
}

int main(){
    int t; 
    cin>> t;
    for(int i=1; i<=t; i++){
        int n;
        cin>>n;
        sorted(n);
    }

    return 0 ;
}