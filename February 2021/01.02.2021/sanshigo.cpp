class Solution {
public:
    int matrixScore(vector<vector<int>>& A) {   
        auto col = A.front().size();
        auto row = A.size();
        int ct = 0;
        for (int i=0; i<row; i++) {
            ct += A[i][0];
        }
        
        if (ct < row / 2.0) {
            for (int i=0; i<row; i++) {
                A[i][0] = !A[i][0];
            }
        }
        
        for (int i=0; i<row; i++) {
            if (A[i][0] == 0) {
                for (int j=0; j<A[i].size(); j++) {
                    A[i][j] = !A[i][j];
                }
            }
        }
        
        for (int i=1; i<col; i++) {
            int ct = 0;
            for (int j=0; j<row; j++) {
                ct += A[j][i];
            }
            if (ct < row / 2.0) {
                for (int j=0; j<row; j++) {
                    A[j][i] = !A[j][i];
                }
            }
        }
        
        int ans = 0;
        for (int i=0; i<row; i++) {
            int k = 1;
            for (int j=col-1; j>=0; j--) {
                ans += k * A[i][j];
                k *= 2;
            }
        }
        return ans;
    }
};
