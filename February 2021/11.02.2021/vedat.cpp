class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
         int n = A.size();
         int m = A[0].size();
        vector<vector<int>> solution(m, vector<int> (n));
        
        for(int i = 0; i < A.size(); i++){
            for(int j = 0; j < A[i].size(); j++){
                solution[j][i] = A[i][j];
            }
        }
        return solution;
    }
};
