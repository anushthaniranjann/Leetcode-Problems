class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        for(int i=0;i <magazine.size();i++){
            mp[magazine[i]]++;
        }
        for(auto it: ransomNote){
            while(!mp[it]--)
                return false;
        }
        return true;
    }
};