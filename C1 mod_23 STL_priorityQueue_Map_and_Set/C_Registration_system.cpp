#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int> cnt;
    int n; cin>>n;

    for(int i=1;i<=n;i++){
        string name;
        cin>>name;
        if(cnt[name]==0)
            cout<<"OK"<<endl; //at 1st, always value=0
        else 
            cout<<name << cnt[name] <<endl; //show previous value 
        cnt[name]= cnt[name]+1;//increment value (COUNT)
    } 

    return 0 ;
}