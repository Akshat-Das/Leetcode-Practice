class Solution {
public:
    int m;
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        m = matrix.size(); 
        int left = matrix[0][0], right = matrix[m-1][m-1], ans = -1;
        while (left <= right) {
            int mid = (left + right) >> 1;
            if (countLessOrEqual(matrix, mid) >= k) {
                ans = mid;
                right = mid - 1; 
            } else left = mid + 1;
        }
        return ans;
    }
    int countLessOrEqual(vector<vector<int>>& matrix, int x) {
        int cnt = 0, c = m - 1; 
        for (int r = 0; r < m; ++r) {
            while (c >= 0 && matrix[r][c] > x) --c;  
            cnt += (c + 1);
        }
        return cnt;
    }
};