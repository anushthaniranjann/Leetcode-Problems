class Solution {
public:
    int search(vector<int>& nums, int target) {
        // set<int> s(nums.begin(), nums.end());
        // for(auto it: s){
        //    s.find(target);
        //      return it;
        // }
        // return -1;
        for( int i=0; i<nums.size(); i++){
            if( nums[i]== target)
            return i;
            
        }
        return -1;
    }
};