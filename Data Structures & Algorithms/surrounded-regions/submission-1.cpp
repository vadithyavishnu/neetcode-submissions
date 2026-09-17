class Solution {
public:

    void dfs(int i, int j, vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();

        // Mark current O as safe
        board[i][j] = 'Y';

        // Down
        if (i + 1 < n && board[i + 1][j] == 'O') {
            dfs(i + 1, j, board);
        }

        // Up
        if (i - 1 >= 0 && board[i - 1][j] == 'O') {
            dfs(i - 1, j, board);
        }

        // Right
        if (j + 1 < m && board[i][j + 1] == 'O') {
            dfs(i, j + 1, board);
        }

        // Left
        if (j - 1 >= 0 && board[i][j - 1] == 'O') {
            dfs(i, j - 1, board);
        }
    }

    void solve(vector<vector<char>>& board) {

        int n = board.size();
        int m = board[0].size();

        // First row
        for (int j = 0; j < m; j++) {
            if (board[0][j] == 'O') {
                dfs(0, j, board);
            }
        }

        // Last row
        for (int j = 0; j < m; j++) {
            if (board[n - 1][j] == 'O') {
                dfs(n - 1, j, board);
            }
        }

        // First column
        for (int i = 0; i < n; i++) {
            if (board[i][0] == 'O') {
                dfs(i, 0, board);
            }
        }

        // Last column
        for (int i = 0; i < n; i++) {
            if (board[i][m - 1] == 'O') {
                dfs(i, m - 1, board);
            }
        }

        // Convert surrounded O -> X
        // Convert safe Y -> O
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (board[i][j] == 'O') {
                    board[i][j] = 'X';
                }
                else if (board[i][j] == 'Y') {
                    board[i][j] = 'O';
                }
            }
        }
    }
};