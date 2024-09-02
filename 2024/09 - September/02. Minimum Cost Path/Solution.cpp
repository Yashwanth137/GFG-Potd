class Solution 
{
public:
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        int N = grid.size();
        vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        vector<vector<int>> dist(N, vector<int>(N, INT_MAX));
        
        dist[0][0] = grid[0][0];
        pq.push({grid[0][0], {0, 0}});
        
        while (!pq.empty()) 
        {
            pair<int, pair<int, int>> top = pq.top();
            pq.pop();
            int currentCost = top.first;
            int r = top.second.first;
            int c = top.second.second;
            
            if (r == N - 1 && c == N - 1) 
            {
                return currentCost;
            }
            
            for (auto direction : directions) 
            {
                int nr = r + direction.first;
                int nc = c + direction.second;
                
                if (nr >= 0 && nr < N && nc >= 0 && nc < N) 
                {
                    int newCost = currentCost + grid[nr][nc];
                    
                    if (newCost < dist[nr][nc]) 
                    {
                        dist[nr][nc] = newCost;
                        pq.push({newCost, {nr, nc}});
                    }
                }
            }
        }
        return -1;
    }
};
