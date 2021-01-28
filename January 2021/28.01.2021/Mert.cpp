class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int count = 0;
        for (int i = 0; i < points.size() - 1; ++i) {
            int xDif = abs(points[i][0] - points[i+1][0]);
            int yDif = abs(points[i][1] - points[i+1][1]);
            if(xDif - yDif > 0){
                count += xDif;
            }else{
                count += yDif;
            }
        }
        return count;
    }
};