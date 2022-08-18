class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int ,int> mp;
        priority_queue<int> pq;
         for(auto it: arr){
             mp[it]++;
         }
        for(auto s: mp){
            pq.push(s.second);
        }
        int ele = 0, setCount=0;
        while(!pq.empty()){
            ele+= pq.top();
            pq.pop();
            setCount++;
            if(ele >= arr.size()/2){
                return setCount;
            }
        }
        return 0;
    }
};