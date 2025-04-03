#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sum_idx(vector<int>nums, int st, int end){
            if(st>end) return 0;
            int sum=0;
            for(int i=st; i<=end; i++){
                sum+= nums[i] ;
            }
            return sum;
    }
    
    
    int pivotIndex(vector<int>& nums) {
            int l_sum, r_sum;
            int n= nums.size();
    
            for(int i=0; i<n;i++){
                l_sum= sum_idx(nums, 0, i-1);
                r_sum= sum_idx(nums,i+1,n-1);
                if(l_sum==r_sum){
                    return i;
                }
            }
            return -1;
    }
};