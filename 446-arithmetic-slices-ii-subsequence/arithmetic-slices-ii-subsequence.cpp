typedef long long ll;
class Solution {
    int dp[1001][1001];
    int dfs(int x, int y, vector<int> &nums, unordered_map<ll,vector<int>> &idx){
        if(dp[x][y]!=-1)
            return dp[x][y];
        ll z=2ll*nums[y]-nums[x];
        auto i=upper_bound(idx[z].begin(),idx[z].end(),y);
        if(i==idx[z].end())
            return dp[x][y]=0;
        int res=0;
        for(;i!=idx[z].end();i++){
            res+=dfs(y,*i,nums,idx)+1;
        }
        return dp[x][y]=res;
    }
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        unordered_map<ll,vector<int>> idx;
        for(int x=0;x<nums.size();x++){
            idx[nums[x]].push_back(x);
        }
        int res=0;
        for(int y=1;y<nums.size();y++){
            for(int x=0;x<y;x++){
                res+=dfs(x,y,nums,idx);
            }
        }
        return res;
    }
};