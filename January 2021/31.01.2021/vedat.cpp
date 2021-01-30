class Solution {
public:
    vector<int> dx = {0, 1, 0, -1};
    vector<int> dy = {1, 0, -1, 0};
    void dfs(int x, int y, vector<vector<bool>>& visited, vector<vector<char>>& board) {
        for (int i=0; i<4; i++) {
            int xx = x + dx[i];
            int yy = y + dy[i];
            visited[x][y] = 1;
            if (xx >= 0 && xx < visited.size() &&
                yy >= 0 && yy < visited[xx].size() && 
                !visited[xx][yy] && board[xx][yy] == 'X') {
                dfs(xx, yy, visited, board);
            }
        }
    }
    int countBattleships(vector<vector<char>>& board) {
        vector<vector<bool>> visited(board.size(), vector<bool>(board[0].size()));
        int ans = 0;
        for (int i=0; i<visited.size(); i++) {
            for (int j=0; j<visited[i].size(); j++) {
                if (!visited[i][j] && board[i][j] == 'X') {
                    ans++;
                    dfs(i, j, visited, board);
                }
            }
        }
        return ans;
    }
};
