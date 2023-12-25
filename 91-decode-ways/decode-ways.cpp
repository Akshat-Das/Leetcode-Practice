class Solution {
public:
    int numDecodings(string s) {
        int n=s.length();
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        if(s[0]!='0')
        dp[0]=1;
        for(int i=1;i<n;i++){
            if(i-1>=0 ){
                if(s[i]!='0')
                dp[i]=dp[i-1];
                int num=stoi(s.substr(i-1,2));
                if(num>=1 and num<=26 ){
                    if(i-2>=0 and s[i-1]!='0')
                    dp[i]+=dp[i-2];
                    else if(s[i-1]!='0')
                    dp[i]++;
                }
            }
        }
        return dp[n-1];
    }
};