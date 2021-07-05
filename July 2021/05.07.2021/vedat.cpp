class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if (r * c != mat.size() * mat[0].size()) return mat;
        vector<vector<int>> vec(r, vector<int>(c));
        int c_r = 0;
        int c_c = 0;
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[i].size(); j++) {
                vec[c_r][c_c++] = mat[i][j];
                if (c_c == c) {
                    c_r++;
                    c_c = 0;
                }
            }
        }
        return vec;
    }
};
