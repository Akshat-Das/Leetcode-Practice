class Solution {
public:
    string removeDuplicates(string s,int p=0) {
        for(int i = 0; i < s.size(); i++) {
            if(p > 0 && s[i] == s[p-1]) p--;
            else s[p++] = s[i];
        }
        return s.substr(0,p); 
    }
};