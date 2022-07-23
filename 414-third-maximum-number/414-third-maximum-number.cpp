class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long one, two, three;
        one = two =  three = LONG_MIN;
        for( int n: nums){
            if(n == one|| n == two || n == three) continue;
            if(n > one){
                three = two;
                   two = one;
                one = n;
            }
            else if( n > two){
                three = two;
                two = n;
            }
            else if(n > three) {
                three = n;
            }
    }
      return three == LONG_MIN ? one: three;
    }
};