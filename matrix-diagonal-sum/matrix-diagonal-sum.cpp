class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row = mat.size(),sum = 0; 
        for(int i=0;i<row;i++){
            sum += mat[i][i];
            sum += mat[row-1-i][i];
            // cout << sum << " ";
        }
        // for(int i=0;i<row;i++){
            
        //     cout << sum << " ";
        // }
        if(row %2 == 1){
            sum -= mat[floor(row/2)][floor(row/2)];
        }
        return sum;  
    }
};