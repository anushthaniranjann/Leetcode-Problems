class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> v;
        sort(nums.begin(), nums.end());
        
         for( int i=0; i<n; i++){
             int left = i+1;
             int right = n-1;
             while( left< right){
                 int three_sum = nums[i]+ nums[left]+ nums[right];
                 if(three_sum ==0){
                int x = nums[left];
                int y = nums[right];
                 v.push_back({nums[i], nums[left], nums[right]});
           
             while( left < right && nums[left]== x)
                 left++;
             while(left < right && nums[right] == y)
                 right--;
             }
                 else if( three_sum > 0)
                     right--;
                 else 
                     left ++;
             }
             while(i+1 < nums.size() && nums[i+1] == nums[i])
                 i++;
         }
        return v;
    }
};