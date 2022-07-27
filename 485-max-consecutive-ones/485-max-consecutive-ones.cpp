class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            int curr = 0;
            for( int j=i; j<n;j++){
            if(nums[j] == 1) 
                curr++;
            else
                break;
            
         }
           count = max(curr, count); 
        }
        return count;
    }
};