class Solution {
public:
    int maxProduct(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end()) ; //descending sort
        int ans= (nums[0]-1) * (nums[1]-1) ; //large 2 values give maxProduct
        return ans;
    }
};