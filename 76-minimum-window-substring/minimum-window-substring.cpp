class Solution {
public:
    string minWindow(string s, string t) {
        int count, i = 0, j = 0,len = pow(10,6),check = 0,x,y;
        string ans = "";
        unordered_map<char,int> mp;
        for(char c:t){
            mp[c]++;
        }
        count = mp.size();
        while(j < s.size()){
            if(mp.find(s[j]) != mp.end()){
                mp[s[j]]--;
                if(mp[s[j]] == 0) count--;
            }
            while(count == 0){
                check = 1;
                if(j-i + 1 < len){
                    len = j-i + 1;
                    x = i;
                    y = j;
                }
                // cout << i << " " << j << endl;
                if(mp.find(s[i]) != mp.end()){
                    mp[s[i]]++;
                    if(mp[s[i]] == 1) count++;
                }
                i++;
            }
            j++;
        }
        if(check == 1){
            for(x;x <= y;x++){
                ans += s[x];
            }
        } 
        return ans;
    }
};