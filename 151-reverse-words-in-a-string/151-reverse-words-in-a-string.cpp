class Solution {
public:
   string reverseWords(string s) {
        string word = "";
        vector<string> words;
        for(auto letter : s){
            if(letter != ' '){
                word += letter;
            }else{
                if(word.size() != 0) words.push_back(word);
                word = "";
            }
        }
        if(word.size() != 0) words.push_back(word);
        s = "";
        reverse(words.begin(), words.end());
        for(auto wrd: words){
            s += wrd + " ";
        }
        s.pop_back();
        return s;
    }
};