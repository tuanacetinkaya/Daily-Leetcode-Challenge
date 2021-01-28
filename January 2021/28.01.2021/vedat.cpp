class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans = 0;
        for (int i=1; i<points.size(); i++) {
            int diff_x = abs(points[i][0] - points[i-1][0]);
            int diff_y = abs(points[i][1] - points[i-1][1]);
            ans += max(diff_x, diff_y);
        }
        return ans;
    }
};