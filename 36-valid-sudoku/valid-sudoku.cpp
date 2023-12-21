class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int arr[9] = {0};
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j] != '.'){
                    if(board[i][j] > '9' || board[i][j] < '1') return false;
                    arr[board[i][j] - '1'] += 1;
                }
            }
            for(int k=0;k<9;k++) if(arr[k] > 1) return false;
            for(int k=0;k<9;k++) arr[k] = 0;
        }
        for(int j=0;j<9;j++){
            for(int i=0;i<9;i++){
                if(board[i][j] != '.'){
                    if(board[i][j] > '9' || board[i][j] < '1') return false;
                    arr[board[i][j] - '1'] += 1;
                }
            }
            for(int k=0;k<9;k++) if(arr[k] > 1) return false;
            for(int k=0;k<9;k++) arr[k] = 0;
        }
        
        for(int s = 0;s<3;s++){
            for(int i=3*s;i < (3*s) + 3;i++){
                for(int j=0;j<3;j++){
                    if(board[i][j] != '.'){
                        if(board[i][j] > '9' || board[i][j] < '1') return false;
                        arr[board[i][j] - '1'] += 1;
                    }
                }
            }
            for(int k=0;k<9;k++) if(arr[k] > 1) return false;
            for(int k=0;k<9;k++) arr[k] = 0;
        }

        for(int s = 0;s<3;s++){
            for(int i=3*s;i < (3*s) + 3;i++){
                for(int j=3;j<6;j++){
                    if(board[i][j] != '.'){
                        if(board[i][j] > '9' || board[i][j] < '1') return false;
                        arr[board[i][j] - '1'] += 1;
                    }
                }
            }
            for(int k=0;k<9;k++) if(arr[k] > 1) return false;
            for(int k=0;k<9;k++) arr[k] = 0;
        }

        for(int s = 0;s<3;s++){
            for(int i=3*s;i < (3*s) + 3;i++){
                for(int j=6;j<9;j++){
                    if(board[i][j] != '.'){
                        if(board[i][j] > '9' || board[i][j] < '1') return false;
                        arr[board[i][j] - '1'] += 1;
                    }
                }
            }
            for(int k=0;k<9;k++) if(arr[k] > 1) return false;
            for(int k=0;k<9;k++) arr[k] = 0;
        }
        return true;
    }
};

