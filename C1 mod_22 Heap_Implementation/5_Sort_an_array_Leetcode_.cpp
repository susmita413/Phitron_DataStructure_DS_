// https://leetcode.com/problems/sort-an-array/
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
            if(idx==largeIdx) break;
            swap(v[largeIdx],v[idx]);
            idx= largeIdx;
        }
    }

    void pop(int idx){
        swap(v[idx], v[v.size()-1]);
        v.pop_back();
        down_heapify(idx);
    }

    int extract_max(){ // every peek maxValue and pop it
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
    }

    void printHeap(){
        cout<<"\nprint: " ;
        for(int x: v){
            cout<< x <<" " ;
        }
        cout<<endl;
    }
};

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        MaxHeap t;
        t.buildHeapFromArray(nums); //create MaxHeap from Array
        t.printHeap();

        vector<int> res;
        for(int i=0; i<nums.size(); i++){
            res.push_back(t.extract_max()); 
            //keep all max one-by-one in 'res'Vector
        }
        reverse(res.begin(), res.end());
        for(int x: res){
            cout<<x <<" " ;
        }
        cout<<endl;

        return res;
    }
};