class Solution {
public:
    int NormalSum(vector<int> &nums){
    int n =nums.size();
        int res = nums[0]; int maxend = nums[0];
        for( int i=1; i<n; i++){
            maxend = max( maxend+ nums[i], nums[i]);
            res = max( maxend, res);
        }
        return res;
}
    
    int maxSubarraySumCircular(vector<int>& nums) {
        int n =nums.size();
        int max_normal = NormalSum( nums);
        if( max_normal <0)
            return max_normal;
        int arrsum =0;
        for( int i =0; i<n; i++){
            arrsum = arrsum+ nums[i];
            nums[i] = -nums[i];
        }
        int max_circular = arrsum + NormalSum(nums);
        return max(max_circular, max_normal);
    }
};