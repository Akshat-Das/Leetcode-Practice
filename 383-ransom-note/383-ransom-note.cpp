class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int a[26]={0},b[26]={0};
        bool answer = false;
        for(auto i :ransomNote)
            a[i-'a']++;
        for(auto j : magazine)
            b[j - 'a']++;
        for(int i=0;i<26;i++){
            if(a[i] <= b[i]){
                answer = true;
            }else{
                answer = false;
                return answer;
            }
        }
        return answer;
    }
};