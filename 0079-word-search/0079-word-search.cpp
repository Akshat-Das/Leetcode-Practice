class Solution {
    int index(int i, int j) {
        return (i << 8) | j;
    }
    vector<int> visited;
    bool check(vector<vector<char>>& board, const string& word, int i, int M, int j, int N, int idx, int len) {
        if(board[i][j] == word[idx]) {
            if(len - idx == 1) {
                return true;
            }
            auto indx = index(i, j);
            visited[indx] = 1;
            bool b = false;
            static const vector<pair<int,int>> moves = {
                {1,  0},
                {-1, 0},
                {0,  1},
                {0, -1}
            };
            for(const auto &mv : moves) {
                int ni = i + mv.first;
                int nj = j + mv.second;
                if(ni < 0 || nj < 0 || ni >= M || nj >= N) {
                    continue;
                }
                if(visited[index(ni, nj)])
                    continue;
                if(check(board, word, ni, M, nj, N, idx+1, len))
                    return true;
            }
            visited[indx] = 0;
            return false;
        }
        return false;        
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int M = board.size();
        int N = board[0].size();
        if(!N) {
            return false;
        }
        int len = word.length();
        visited.resize((M<<8) | N, 0);
        for(int i = 0; i < M; ++i) {
            for(int j = 0; j < N; ++j) {
                if(board[i][j] != word[0])
                    continue;
                if(check(board, word, i, M, j, N, 0, len)) {
                    return true;
                }
            }            
        }
        return false;
    }
};