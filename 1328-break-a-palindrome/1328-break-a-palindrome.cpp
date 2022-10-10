class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n=palindrome.length();
        if(n==1) return "";
        int i=0;
        for(;i<n/2;i++){
            if(palindrome[i]!='a') break;
        }
        if(i<n/2) palindrome[i]='a';
        else if(n%2!=0 && palindrome[(n/2)+1]!='a') palindrome[(n/2)+1]='a';  
        else palindrome[n-1]='b';
        return palindrome;
    }
};