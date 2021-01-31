public class Solution {
    public int CountBattleships(char[][] board) {
        int numberOfBattleships = 0;
        for (int i = 0; i < board.Length ; i++){
            for(int j = 0; j < board[i].Length ; j++){
                if (board[i][j] == 'X') {
                    if (i < board.Length-1 && board[i+1][j] == 'X')
                        numberOfBattleships--;
                    if (j == board[i].Length - 1)
                        numberOfBattleships++; 
                    else if (board[i][j+1] == '.')
                        numberOfBattleships++; 
                }
            }
        }
        return numberOfBattleships;
    }
}