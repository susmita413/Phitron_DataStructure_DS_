// sort with estractMax,pop,down_heapify function in MaxHeap
//external function for sorting

#include<bits/stdc++.h>
using namespace std;
class MaxHeap{
public:
    vector<int> v;
    void up_heapify(int idx){
        while(idx>0 && v[(idx-1)/2]< v[idx]){
            swap(v[(idx-1)/2], v[idx]);
            idx= (idx-1)/2;
        }
    }
    void push(int val){
        v.push_back(val);
        up_heapify(v.size()-1);
    }

    void down_heapify(int idx){
        int largeIdx= idx;
        while(1){
            int l= idx*2+1;
            int r= idx*2+2;
            if(l<v.size() && v[largeIdx]< v[l]) largeIdx=l;
            if(r<v.size() && v[largeIdx]< v[r]) largeIdx=r;
            if(idx==largeIdx) break;
            swap(v[largeIdx],v[idx]);
            idx= largeIdx;
        }
    }

    void pop(int idx){
        swap(v[idx], v[v.size()-1]);
        v.pop_back();
        if(v[(idx-1)/2]< v[idx]) up_heapify(idx);
        else down_heapify(idx);
    }

    int extract_max(){ //everytime peek maxValue and pop it
        int max= v[0];
        pop(0);
        return max;
    }

    void buildHeapFromArray(vector<int> &ar){
        v= ar;
        int lastNonLeafNode= (ar.size()/2)-1 ;
        for(int i=lastNonLeafNode; i>=0; i--){
            down_heapify(i);
        }
        //lastNonLeafNode theke uporer nodegula down_heapify kore "MaxHeap Parent-child" relation
        //thik korbe
        //leaf has no Child, so they have no need to Heapify.
    }

    void printHeap(){
        cout<<"\nprint: " ;
        for(int x: v){
            cout<< x <<" " ;
        }
        cout<<endl;
    }
};

vector<int> heapSort_ascending(vector<int> arr){
    MaxHeap k;
    k.buildHeapFromArray(arr);//create MaxHeap from Array
    //k.printHeap(); 
    vector<int> res2;
    for(int i=0; i<arr.size(); i++){
        res2.push_back(k.extract_max()); 
        //keep all max one-by-one in 'res2'Vector
    }
    reverse(res2.begin(), res2.end()) ;
    return res2;
}

int main(){
    MaxHeap t;
    vector<int> ar={2,3,4,8,11,10,9,6};
    // t.buildHeapFromArray(ar); //create MaxHeap from Array
    // vector<int> res;
    // for(int i=0; i<ar.size(); i++){
    //     res.push_back(t.extract_max()); 
    //     //keep all max one-by-one in 'res'Vector
    // }
    // reverse(res.begin(), res.end());

    vector<int> res= heapSort_ascending(ar);
    cout<<"sorted array: " ;
    for(int x: res){
        cout<<x <<" " ;
    }
    cout<<endl;


    return 0 ;
}