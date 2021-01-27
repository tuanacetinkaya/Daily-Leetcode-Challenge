class Solution {
public:
int minTimeToVisitAllPoints(vector<vector<int>>& points) {
    int result = 0;
    if (points.size() == 1) return result;
    result = max(abs(points[0][0]-points[1][0]),abs(points[0][1]-points[1][1]));
    points.erase(points.begin());
    return result+minTimeToVisitAllPoints(points);
}
};
