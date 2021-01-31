class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int result = 0;    
        for(int i = 0 ;i<board.size();i++){       
            for(int j = 0 ; j<board[0].size();j++){
                if(board[i][j] =='X'){
                    if(j==0 && i == 0){
                        result+=1;
                    }
                    else if(j==0){
                        if(board[i-1][j] != 'X'){
                            result+=1;
                        }
                    }
                    else if(i==0){
                        if(board[i][j-1] != 'X'){
                            result+=1;
                        }
                    }
                    else{
                        if(board[i-1][j] != 'X' && board[i][j-1] != 'X'){
                            result+=1;
                        }
                    } 
                }
            }  
        }
        return result;     
    }
};
