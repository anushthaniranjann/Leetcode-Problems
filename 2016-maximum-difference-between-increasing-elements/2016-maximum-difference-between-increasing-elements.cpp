class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int res = nums[1]-nums[0], minVal = nums[0];
        int n = nums.size();
        for(int j=1; j<n; j++){
            res = max( res, nums[j]-minVal);
            minVal = min( minVal, nums[j]);
        }
        if(res<=0)
            return -1;
        return res;
    }
};