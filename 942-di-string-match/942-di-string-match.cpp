class Solution {
public:
    vector<int> diStringMatch(string s) {
       vector<int>v;
        int low=0;
        int high=s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]=='I'){
                v.push_back(low);
                low++;
            }
            else if(s[i]=='D'){
                v.push_back(high);
                high--;
            }
         
        }
        if(low==high)
            v.push_back(low);
       return v;
    }
};