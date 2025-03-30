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

void delete_maxheap(vector<int> &v){
    v[0]=v[v.size()-1]; //last Value transfered to root
    v.pop_back();
    int cur=0; //parent
    int last_idx= v.size()-1; //use for valid child
    while(true){
        int left_idx= cur*2+1; //2 child
        int right_idx=cur*2+2;
        if(left_idx<=last_idx && right_idx<=last_idx){//left & rightCHILD exist
            if(v[left_idx]>= v[right_idx] && v[left_idx]>v[cur]){ //left child=largest value
                swap(v[left_idx], v[cur]);
                cur=left_idx;
            }
            else if(v[right_idx]>= v[left_idx] && v[right_idx]> v[cur]){//rightChild=largest
                swap(v[right_idx], v[cur]);
                cur= right_idx;
            }
            else break;  // left<cur, right<cur -> maxHeap ok
        }

        else if(left_idx<=last_idx){ //has only left child
            if(v[left_idx] > v[cur]){ //left child large
                swap(v[left_idx],v[cur]);
                cur= left_idx;
            }
            else break; //left child< cur ->maxHeap ok
        }
        else if(right_idx<= last_idx){//has only rightChild// unnecessary for complete binary tree
            if(v[right_idx]> v[cur]){
                swap(v[right_idx], v[cur]);
                cur= right_idx;
            }
            else break;   //right child< cur ->maxHeap ok 
        }
        else{ //has NO child
            break;
        }
    }
}

void print_heap(vector<int> v){
    cout<<endl<< "print: ";
    for(int val: v){
        cout<<val <<" " ;
    }
    cout<<endl;
}

int main(){
    vector<int> v;
    int n; cin>>n; //ENTER VECTOR SIZE
    for(int i=0; i<n; i++){
        int x; cin>>x ;
        insert_in_MaxHeap(v,x);
    }
    print_heap(v);
    delete_maxheap(v);
    //delete_maxheap(v);
    //delete_maxheap(v);

    cout<<endl<<"after delete: ";
    print_heap(v);
}

/*
11
100 60 30 50 40 20 25 10 3 8 9
print: 100 60 30 50 40 20 25 10 3 8 9

after 1st delete:
print: 60 50 30 10 40 20 25 9 3 8

after 2nd delete:
print: 50 40 30 10 8 20 25 9 3

after 3rd delete:
print: 40 10 30 9 8 20 25 3

*/