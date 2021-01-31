class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int result = 0;
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] == '.') continue;
                    
                if (j+1 < board[0].size() && board[i][j+1] == 'X') {
                        board[i][j] = '.';
                        continue;
                } else if (i+1 < board.size() && board[i+1][j] == 'X') {
                        board[i][j] = '.';
                        continue;
                } else {
                    result++;
                }               
            }
        }
        return result;
    }
};
