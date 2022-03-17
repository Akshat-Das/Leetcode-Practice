class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size(),m = matrix[0].size();
        int col = 0;
        for(int i=0;i<n;i++){
            if(matrix[i][m-1] >= target){
                col = i;
                break;
            }
        }
        bool answer = false;
        for(int i=0;i<m;i++){
            if(matrix[col][i] == target){
                answer = true;
                break;
            }
        }
       
        return answer;
    }
};