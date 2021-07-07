class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> vec;
        for (int i=0; i<matrix.size(); i++) {
            for (int j=0; j<matrix[i].size(); j++) {
                vec.push_back(matrix[i][j]);
            }
        }
        sort(vec.begin(), vec.end());
        return vec[k-1];
    }
};
