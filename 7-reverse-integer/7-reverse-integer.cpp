class Solution {
public:
    int reverse(int x) {
      long long int rev = 0;
        long long int t = abs(x);
        while(t!=0){
          int  rem = t % 10;
            rev = (rev*10)+ rem;
            t = t/10;
        }
        if( rev > INT_MAX || rev< INT_MIN){
            return 0;
        }
        if( x> 0)
        return rev;
        else return -rev;
    }
};