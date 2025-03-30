#include<bits/stdc++.h>
using namespace std;
// maxheap: parent>= child

void insert_in_MaxHeap(vector<int> &v, int x){
    v.push_back(x);
    int cur= v.size()-1;  //traverse from last index
    while(cur!=0){
        int par_indx= (cur-1)/2 ; //parent index
        if(v[par_indx]< v[cur]){  //if parent is small,then swap
            swap( v[par_indx], v[cur]);
            cur= par_indx;        //update current Index
        }
        else{
            break;
        }
    }
}

void print_heap(vector<int> v){
    cout<<"print: ";
    for(int val: v){
        cout<<val <<" " ;
    }
    cout<<endl;
}

int main(){
    vector<int> v;
    for(int i=0; i<11; i++){
        int x; cin>>x ;
        insert_in_MaxHeap(v,x);
    }
    print_heap(v);
}

/*
input: 50 40 45 30 35 42 32 25 20 10 55
_
print: 55 50 45 30 40 42 32 25 20 10 35 
*/