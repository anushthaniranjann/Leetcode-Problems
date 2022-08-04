class Solution {
public:
    string frequencySort(string s) {
        unordered_map< char, int> m;
        vector<pair<int,char>> v;
int size= s.size();
        for(int i=0; i<size;i++){
            m[s[i]]++;
        }
        for(auto pr: m){
            v.push_back({pr.second, pr.first});
        }
        sort(v.begin(), v.end());
        int vs = v.size();
        s = "";
        for( int i= vs-1; i>=0;i--){
            while( v[i].first != 0){
                s+= v[i].second;
                v[i].first--;
            }
        }
       
        return s;
    }
};

