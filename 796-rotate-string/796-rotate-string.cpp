class Solution {
public:
    bool rotateString(string s, string goal) {
        queue<char> q1;
        queue<char> q2;
        for(int i=0; i<s.size(); i++){
            q1.push(s[i]);
        }
        for(int i=0;i<goal.size();i++){
            q2.push(goal[i]);
        }
        
        int k = goal.size();
        while(k--){
            char ch = q2.front();
            q2.pop();
            q2.push(ch);
            if(q2==q1)
                return true;
        }
        return false;
        }
};