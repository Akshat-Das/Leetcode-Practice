class Solution {
public:
    bool isAnagram(string s, string t) {
        int len1 = s.length(), len2 = t.length();
        if(len1 != len2) return false;
        unordered_map <char,int> mp1,mp2;
        for(auto i:s){
            mp1[i]++;
        }
        for(auto i:t){
            mp2[i]++;
        }
        return mp1 == mp2;
    }
};