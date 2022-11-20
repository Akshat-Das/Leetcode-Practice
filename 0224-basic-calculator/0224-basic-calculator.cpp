class Solution {
public:
    int calculate(string s) {
        int n = s.size();
        stack<int> st;
        long long num = 0;
        char sign = '+';
        for(int i = 0; i < n; i++){
            while(s[i] == ' '){
                i++;
            }
            if(isdigit(s[i])){
                num = num * 10 + s[i] - '0';
            }
            else if (s[i] == '('){
                int j = i;
                int cnt = 0;
                while(j < n){
                    if(s[j] == '(') cnt++;
                    if(s[j] == ')') cnt--;
                    if(cnt == 0) break;
                    j++;
                }
                num = calculate(s.substr(i + 1, j - i - 1));
                i = j;
            }
            if(!isdigit(s[i]) || i == n - 1){
                if(sign == '+') st.push(num);
                else if(sign == '-') st.push(-num);
                sign = s[i];
                num = 0;
            }
        }
        int ans = 0;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};