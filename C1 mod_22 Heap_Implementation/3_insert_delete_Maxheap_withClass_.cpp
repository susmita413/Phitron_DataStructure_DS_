// parent= (i-1)/2 , Lchild= i*2+1 , Rchild= i*2+2 
//maxHeap: parent>= child 
//C.S.-1

#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
public:
    vector<int> v;
    MaxHeap(){

    }

    void up_heapify(int idx){
        while(idx>0 && v[(idx-1)/2]< v[idx]){ 
            //if parent is smaller,than Swap Parent<->child
            swap( v[(idx-1)/2], v[idx]);
            idx= (idx-1)/2 ;
        }
    }
    void push(int val){
        v.push_back(val);
        up_heapify(v.size()-1);
    }

    void down_heapify(int idx){
        int largeIdx = idx; //large value's index will be largeIdx
        while(1){
            int l= idx*2+1 ; //child
            int r= idx*2+2 ;
            if(l<v.size() && v[largeIdx]<v[l]) largeIdx=l ;
            if(r<v.size() && v[largeIdx]<v[r]) largeIdx=r;
            if(idx==largeIdx) break;

            swap(v[idx], v[largeIdx]); 
            idx= largeIdx ;
        }
    }

    void pop(int idx){ //index-based pop
        swap(v[idx], v[v.size()-1]) ;
        v.pop_back();
        if(v[idx]> v[(idx-1)/2]) //if parent is smaller
            up_heapify(idx);
        else
            down_heapify(idx);
    }

    void printHeap(){
        cout<<"\nprint: " ;
        for(int x: v){
            cout<< x <<" " ;
        }
        cout<<endl;
    }
};


int main(){
    MaxHeap t;
    t.push(30);
    t.push(20);
    t.push(10);
    t.printHeap();

    t.push(40);
    t.push(100);
    t.push(60);
    t.push(50);
    t.printHeap();

    t.pop(3);
    t.pop(0);
    t.printHeap();

    return 0 ;
}