class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
         int res = 0, count =1;
            // FIND CANDIDATE
        for( int i=1; i<n; i++){
          if( nums[res]== nums[i])
              count++;
          else
              count--;
          if( count == 0) {
                res=i; 
                count = 1; 
            }
        }
        //CHECK IF CANDIDATE IS ACTUALLY MAJORITY
      int  cont = 0;
        for( int i=0; i<n; i++)
            if(nums[res]==nums[i])
                cont++;
          if( cont > n/2)
            return nums[res];
          return -1;
    }
};