class MinHeap{
public:
    vector<int> v;
    void insert_in_MinHeap(int x){
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

    void delete_minheap(){
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
            else{ //has NO child
                break;
            }
        }
    }

    int extractMin(){
        int min= v[0];
        delete_minheap();
        return min;
    }

};


class Solution {
public:

    vector<int> sortArray(vector<int>& nums) {
        MinHeap t;
        for(int i=0; i<nums.size(); i++){
            t.insert_in_MinHeap(nums[i]);
        }

        vector<int> res;
        for(int i=0; i<nums.size(); i++){
            res.push_back(t.extractMin());
        }

        return res;
    }
};