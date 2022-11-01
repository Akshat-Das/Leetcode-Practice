class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int n=grid.size() , m=grid[0].size();
        vector<int> ans;
        for(int i=0;i<m;i++){
            int j=i,k=0;
            while(k<n){
                if(grid[k][j]==1){
                    if(j+1>=m or grid[k][j+1]==-1){
                        ans.push_back(-1);
                        break;
                    }
                    j++;
                }
                else if(grid[k][j]==-1){
                    if(j-1<0 or grid[k][j-1]==1){
                        ans.push_back(-1);
                        break;
                    }
                    j--;
                }
                k++;
            }
            if(k==n){
                ans.push_back(j);
            }
        } 
        return ans;
    }
};