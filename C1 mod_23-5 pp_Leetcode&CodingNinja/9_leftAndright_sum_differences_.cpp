#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> l_sum;    //array leftSum
        l_sum.push_back(0);
        for(int i=1; i<nums.size();i++){
            l_sum.push_back( l_sum[i-1]+ nums[i-1]);
        }
        
        vector<int> r_sum;     //array rightSum
        reverse(nums.begin(),nums.end());
        r_sum.push_back(0);
        for(int i=1; i<nums.size();i++){
            r_sum.push_back( r_sum[i-1]+ nums[i-1]);
        }
        reverse(r_sum.begin(),r_sum.end());

        vector<int> ans;
        for(int i=0; i<nums.size();i++){
            ans.push_back( abs(l_sum[i]- r_sum[i]) );
        }

        return ans;
    }
};