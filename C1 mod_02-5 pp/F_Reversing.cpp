#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a;
    int n;
    cin>> n;
    
    for(int i=0; i<n; i++){
        int x;  cin>> x ;
        a.push_back(x) ;
    }

    for(int i=n-1; i>=0 ; i--){
        cout<< a[i] <<" " ;
    }

    return 0 ;
}