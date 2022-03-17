class Solution {
public:
    bool isAnagram(string s, string t) {
        bool answer = false;
        int n = s.length(),l = t.length();
        if(n != l) return answer;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<n;i++){
            if(s[i] == t[i]){
                answer = true;
            }else{
                answer = false;
                return answer;
            }
        }
        return answer;
    }
};