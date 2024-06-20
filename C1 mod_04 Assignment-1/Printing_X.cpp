/*
\.../
.\./
..X
./.\
/...\

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n ;
    char a[n][n] ;
    int mid= n/2 ;

    for(int i=0; i<n ; i++){
        for(int j=0; j<n; j++){
            if(i== mid && j== mid){
                a[i][j]= 'X' ;
            }
            else if(i+j == n-1){
                a[i][j]= '/' ;
            }
            else if(i==j){
                a[i][j]= '\\' ;
            }
            else{
                a[i][j]= 'a' ;
            }
            

        }
        
    }

    for(int i=0; i<n ; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]=='a'){
                cout<<" " ;
                continue ;
            }
            cout<<a[i][j] ;
        }
        cout<< endl ;
    }


    return 0 ;

}
/* 7 (space bujhar jonne 'a' disi)
\aaaaa/
a\aaa/a
aa\a/aa
aaaXaaa
aa/a\aa
a/aaa\a
/aaaaa\

1 
X

*/