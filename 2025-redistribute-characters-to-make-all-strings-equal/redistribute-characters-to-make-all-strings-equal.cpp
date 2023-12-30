class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map <char,int> mp;
        for(int i=0;i<words.size();i++){
            for(auto word: words[i]){
                mp[word]++;
            }
        }
        for(auto s: mp){
            if(s.second % words.size() != 0) return false;
        }
        return true;
    }
};