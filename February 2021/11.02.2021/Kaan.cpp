class Solution {
    public int[][] transpose(int[][] A) {
        
        int r = A.length;
        if(r==0){
            return new int[0][0];
        }
        int c = A[0].length;
        int[][] newA  = new int[c][r];
        
        for(int i = 0 ; i<r ; i++){
            
            for(int j = 0 ; j<c ; j++){
                
              newA[j][i] = A[i][j];
                
            }
        }
        
        return newA;
        
    }
}
