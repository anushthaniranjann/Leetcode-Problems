class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj_ind=0,count=1;
        int n =nums.size();
        for(int i=1;i<n;i++){
            if(nums[maj_ind]==nums[i]) count++;
            else count--;
            if(count==0){
                maj_ind=i;
                count=1;
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==nums[maj_ind]) cnt++;
        }
        if(cnt>n/2) return nums[maj_ind];
        else return -1;
    }
};