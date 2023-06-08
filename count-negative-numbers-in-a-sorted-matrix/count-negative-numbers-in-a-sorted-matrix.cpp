class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0,m = grid[0].size(),n = grid.size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[j][i] < 0) ans++;
            }
        }
        return ans;
    }
};