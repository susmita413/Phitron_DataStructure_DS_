#include<bits/stdc++.h>
using namespace std;
// minheap: parent<= child

void insert_in_MinHeap(vector<int> &v, int x){
    v.push_back(x);
    int cur= v.size()-1;  //traverse from last index
    while(cur!=0){
        int par_indx= (cur-1)/2 ; //parent index
        if(v[par_indx]> v[cur]){ 
            swap( v[par_indx], v[cur]);
            cur= par_indx;        //update current Index
        }
        else{
            break;
        }
    }
}

void delete_minheap(vector<int> &v){
    v[0]=v[v.size()-1]; //last Value transfered to root
    v.pop_back();
    int cur=0; //parent
    int last_idx= v.size()-1; //use for valid child
    while(true){
        int left_idx= cur*2+1; //2 child
        int right_idx=cur*2+2;
        if(left_idx<=last_idx && right_idx<=last_idx){//left & rightCHILD exist
            if(v[left_idx]<= v[right_idx] && v[left_idx]<v[cur]){ //left child=smallest
                swap(v[left_idx], v[cur]);
                cur=left_idx;
            }
            else if(v[right_idx]<= v[left_idx] && v[right_idx]< v[cur]){//rightChild=smallest
                swap(v[right_idx], v[cur]);
                cur= right_idx;
            }
            else break;  // left>cur, right>cur -> minHeap ok
        }

        else if(left_idx<=last_idx){ //has only left child
            if(v[left_idx] < v[cur]){ //left child small
                swap(v[left_idx],v[cur]);
                cur= left_idx;
            }
            else break; //left child> cur ->minHeap ok
        }
        // else if(right_idx<= last_idx){//has only rightChild
        //     if(v[right_idx]< v[cur]){ //right child small
        //         swap(v[right_idx], v[cur]);
        //         cur= right_idx;
        //     }
        //     else break;   //right child> cur ->minHeap ok 
        // }
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
        insert_in_MinHeap(v,x);
    }
    print_heap(v);
    delete_minheap(v);
    //delete_minheap(v);
    //delete_minheap(v);

    cout<<endl<<"after delete: ";
    print_heap(v);
}

/*
12
2 4 10 9 12 20 30 40 45 25 28 50
print: 2 4 10 9 12 20 30 40 45 25 28 50

after 1st delete:
print: 4 9 10 40 12 20 30 50 45 25 28

after 2nd delete:
print: 9 12 10 40 25 20 30 50 45 28

after 3rd delete:
print: 10 12 20 40 25 28 30 50 45


*/