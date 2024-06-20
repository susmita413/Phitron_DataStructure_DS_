// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
// Given a number N and an array A of N numbers. Print the array after 
// doing the following operations:
// Replace every positive number by 1.
// Replace every negative number by 2.

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

    for(int i=0; i<n; i++){
        if(a[i] > 0){
            replace(a.begin(), a.end(), a[i], 1) ;
        }
        else if(a[i]<0){
            replace(a.begin(), a.end(), a[i], 2) ; 
        }
    }
    
    for(int val: a){
        cout<< val << " " ;
    }

    return 0 ;
}