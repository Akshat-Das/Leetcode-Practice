class Solution {
public:
    int maxScore(string s) {
        int zerocount = 0, onecount = 0,  ans = 0;
        for(auto a:s){
            if(a == '1') onecount++;
        }
        if(onecount == 0) return s.length() - 1;
        for(int i=0;i<s.length()-1;i++){
            if(s[i] == '0') zerocount++;
            else onecount--;
            ans = max(ans, zerocount + onecount);
        }
        return ans;
    }
};