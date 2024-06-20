#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n] ;
    for(int i=0; i<n ; i++){
        cin>> a[i] ;
    }
    int x;
    cin >> x ;   // search duplicate number

    sort(a, a+n) ;
    int l=0, r=n-1, flag=0 ;
    int ind ;

    while(l<r){
        int mid= (l+r)/2 ;
        if(a[mid] ==x){
            flag=1 ;
            ind = mid ;
            break ;
        }
        if(a[mid]< x){
            l = mid+1 ;
        }
        else{
            r = mid-1 ;
        }
    }

    if(flag ==1){
        if(a[ind+1]==x || a[ind-1] ==x){
            cout<<"true" << endl ;
        }
        else{
            cout<<"false" << endl ;
        }
    }
    else{
            cout<<"false" << endl ;
        }


    return 0 ;
}
