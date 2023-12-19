class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m= img.size(), n = img[0].size();
        vector<vector<int>> ans(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
            int total = 0, count = 0,top = max(0, i - 1),bottom = min(m, i + 2),left = max(0, j - 1),right = min(n,j + 2);
                for (int row = top; row < bottom; row++) {
                    for (int col = left; col < right; col++) {
                        total += img[row][col];
                        count += 1;
                    }
                }
                ans[i][j] = total/count;
            }
        }
        return ans;
    }
};