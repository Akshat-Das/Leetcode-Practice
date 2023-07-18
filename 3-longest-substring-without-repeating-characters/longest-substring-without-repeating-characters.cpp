class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,ans = 0,check = 1;
        unordered_map <char,int> mp;
        while(j < s.size()){
            mp[s[j]]++;
            if(mp[s[j]] > 1) check = 0;
            if(check == 1){
                ans = max(ans,j-i+1);
                j++;
            }else{
                while(mp[s[j]] != 1){
                    mp[s[i]]--;
                    i++;
                }
                j++;
                check = 1;
            }
        }
        return ans;
    }
};