class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        
        vector<int> currentPoint;
        
        currentPoint = points[0];
        
        int result = 0;
        
        for(int i = 1 ;i<points.size();i++){
            
            int xDif = abs(currentPoint[0]-points[i][0]);
            int yDif =  abs(currentPoint[1]-points[i][1]);
            
            int diag = min(xDif,yDif);
            
            result += diag + (xDif + yDif - 2*diag);
            
            currentPoint = points[i];
            
            
        }
        return result;
        
    }
};
