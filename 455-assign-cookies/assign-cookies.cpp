class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans = 0, j =0 , i=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(i != g.size()){
            if(j >= s.size()) break;
            if(s[j] >= g[i]){
                ans++;
                i++;
            }
            j++;
        }
        return ans;
    }
};