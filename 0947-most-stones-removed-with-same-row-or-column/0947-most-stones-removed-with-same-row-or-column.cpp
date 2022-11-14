class Solution {
public:
    void dfs(vector<vector<int>> &stones, int ind,vector<bool> &vis, int n){
         vis[ind] = true;
         for(int i=0;i<n;i++){
             if(!vis[i] && (stones[i][0] == stones[ind][0] || stones[i][1] == stones[ind][1])){
                 dfs(stones,i,vis,n);
             }
         }
     }
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        vector<bool> vis(n,false);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(vis[i]) continue;
            dfs(stones,i,vis,n);
            cnt++;
        }
        return n-cnt;
    }
};