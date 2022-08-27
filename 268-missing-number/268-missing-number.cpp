class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int n = nums.size();
        int total=0;
        for(int i=0;i<n;i++){
            total=total+nums[i];
        }
        sum = (n*(n+1))/2;
        // if(sum==total)
        //     return 0;
        // else 
            return abs(sum-total);
    }
};