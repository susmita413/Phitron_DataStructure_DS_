#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> val;
    int n; cin>>n;

    for(int i=0;i<n;i++){
        int x; cin>>x;
        val.insert(x);    //insert=> sort and No duplicate
    }

    auto it = val.begin();
    it++ ;
    if(it != val.end()) cout<< *it<<endl ;
    else cout<<"NO"<<endl ;

    //or //for more than 1value
    //cout<< *(++val.begin()) <<endl ;
    
    
    return 0 ;
}