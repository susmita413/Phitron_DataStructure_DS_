#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    vector<int> a;
    vector<int> b ;
    cin >> n;
    for(int i=0; i<n ; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    cin>> m ;
    for(int i=0; i<m ; i++){
        int x;
        cin >> x;
        b.push_back(x);
    }

    int indx; cin>> indx ;

    a.insert( a.begin()+indx , b.begin(), b.end() ) ;

    for(int val: a){
        cout << val <<" " ;
    }

    return 0 ;
}