#include<bits/stdc++.h>
using namespace std;
// minheap: parent<= child

void insert_in_MinHeap(vector<int> &v, int x){
    v.push_back(x);
    int cur= v.size()-1;  //traverse from last index
    while(cur!=0){
        int par_indx= (cur-1)/2 ; //parent index
        if(v[par_indx]> v[cur]){  //if parent is big,then swap
            swap( v[par_indx], v[cur]);
            //cur= par_indx;        //update current Index
        }
        else{
            break;
        }
        cur= par_indx;        //update current Index //
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
    for(int i=0; i<5; i++){
        int x; cin>>x ;
        insert_in_MinHeap(v,x);
    }
    print_heap(v);
}

/*
input: 10 60 40 50 30
_
print: 10 30 40 60 50
*/