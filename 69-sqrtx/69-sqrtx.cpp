class Solution {
public:
    int mySqrt(int x) {
       long int num=0;
        while(num!=x){
            if(num*num<x){
                num++;
            }
            else break;
        }
    
        if(num*num==x)
            return num;
        else 
            return num-1;
    }
};