class Solution {
public:
    int minPoints(int rows, int cols, vector<vector<int>>& points) {
        vector<vector<int>> res(rows, vector<int>(cols, 0));
        res[rows - 1][cols - 1] = points[rows - 1][cols - 1] > 0 ? 1 : abs(points[rows - 1][cols - 1]) + 1;
        
        for (int i = rows - 2; i >= 0; --i) {
            res[i][cols - 1] = max(1, res[i + 1][cols - 1] - points[i][cols - 1]);
        }
        
        for (int j = cols - 2; j >= 0; --j) {
            res[rows - 1][j] = max(1, res[rows - 1][j + 1] - points[rows - 1][j]);
        }
        
        for (int i = rows - 2; i >= 0; --i) {
            for (int j = cols - 2; j >= 0; --j) {
                int minPointsToExit = min(res[i + 1][j], res[i][j + 1]);
                res[i][j] = max(1, minPointsToExit - points[i][j]);
            }
        }
        
        return res[0][0];
    }
};
