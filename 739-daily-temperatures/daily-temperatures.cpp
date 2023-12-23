class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int>ans(n,0);
        stack<int>st;
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
            while(!st.empty() && temperatures[st.top()] <= temperatures[i])st.pop();
            if(st.empty()){
                st.push(i);
                continue;
            }
            ans[i] = st.top() - i;
            st.push(i);
        }
        return ans;
    }
};