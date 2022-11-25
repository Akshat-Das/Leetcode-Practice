class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int ans=0;
        long int mod=1e9+7;
        vector<int>dp(arr.size(),0);
        stack<int>st;
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && arr[st.top()]>=arr[i])
                st.pop();
            if(st.size()){
                int prev=st.top();
                dp[i]=dp[prev]+(i-prev)*arr[i];
            }
            else{
                dp[i]=(i+1)*arr[i];
            }
            ans=(ans+dp[i])%mod;
            st.push(i);
        }
        return ans;
    }
};