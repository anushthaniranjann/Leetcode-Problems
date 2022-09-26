class Solution {
public:
    string addBinary(string a, string b) {
        string res="";
        int car = 0, i = a.size()-1, j = b.size()-1;
        int x,y;
        while(i>-1 || j>-1){
            x = (i<0)? 0 : a[i--]-'0';
            y = (j<0)? 0 : b[j--]-'0';
            int r = x + y + car;
            int s = r;
            car = 0;
            if(r==2) s = 0, car = 1;
            if(r==3) s = 1, car = 1;
            res += s + '0';
        }
        if(car) res += '1';
        reverse(res.begin(),res.end());
        return res;
    }
};