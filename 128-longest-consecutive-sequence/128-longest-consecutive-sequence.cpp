class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n = arr.size(); 
      int res = 0, curr = 1;
      set<int> s;
        for( int i=0; i<n;i++){
            s.insert(arr[i]);
        }
        for(auto it : s){
        if( s.find(it+1) != s.end()){
            curr ++;}
            else {
                res= max(curr, res);
                curr=1;
                }
        }
        
        return res;
    }
};