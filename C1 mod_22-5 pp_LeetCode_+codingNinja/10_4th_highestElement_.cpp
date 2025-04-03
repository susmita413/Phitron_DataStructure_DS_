#include<bits/stdc++.h>
using namespace std;

class MaxHeap{
public:
    vector<int> v;
    void down_heapify(int idx){
        int largeIdx= idx;
        while(1){
            int l= idx*2+1;
            int r= idx*2+2;
            if(l<v.size() && v[largeIdx]< v[l]) largeIdx=l;
            if(r<v.size() && v[largeIdx]< v[r]) largeIdx=r;
            if(idx==largeIdx) 
                break;
            swap(v[largeIdx],v[idx]);
            idx= largeIdx;
        }
    }

    void buildHeapFromArray(vector<int> &ar){
        v= ar;
        int lastNonLeafNode= (ar.size()/2)-1 ;
        for(int i=lastNonLeafNode; i>=0; i--){
            down_heapify(i);
        }
    }

    int popMax(){
        int p=v[0];
        swap(v[0], v[v.size()-1]);
        v.pop_back();
        down_heapify(0);
        return p; //return delete value
    }
};


int getFourthLargest(int arr[], int n){
    if(n<4){
        int ans= -2147483648;
        return ans; 
    }

    MaxHeap t;
    vector<int> ar2(arr, arr+n);
    t.buildHeapFromArray(ar2);

    int ans;
    for(int i=0; i<4;i++){
        ans= t.popMax();
    }
    return ans;
}




