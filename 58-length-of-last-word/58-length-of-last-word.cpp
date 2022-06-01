class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int check = 0;
        int ans = 0;
        for(int i=0;i<s.length();i++){
            if((s[i] == ' ') && check == 0){
                
            }else if(s[i] == ' ' && check == 1){
                break;
            }else{
                ans++;
                check = 1;
            }
        }
        return ans;
    }
};