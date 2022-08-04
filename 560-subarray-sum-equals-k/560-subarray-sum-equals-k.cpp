class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int pre_sum = 0, count =0;
       
        for( int i=0; i<nums.size(); i++){
            pre_sum += nums[i];
            nums[i] = pre_sum;}
        mp[0]++;
        
        for(int i =0; i<nums.size(); i++){
            count += mp[(nums[i]-k)];
            mp[nums[i]]++;
        }
        return count;
    }
};