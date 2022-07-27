class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0];
        int n =  nums.size();
        int maxend =  nums[0];
         for( int i=1; i<n ;i++){
             maxend = max( maxend + nums[i], nums[i]);
                 res = max( maxend, res);
         }
        return res;
    }
};