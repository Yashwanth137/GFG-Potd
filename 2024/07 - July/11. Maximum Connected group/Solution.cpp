class Solution 
{
public:
    vector<int> dirX = {1, 0, 0, -1};
    vector<int> dirY = {0, 1, -1, 0};

    void dfs(vector<vector<int>>& parent, vector<int>& componentSize, int component, int i, int j, vector<vector<int>>& grid, int rows, int cols) 
    {
        if (i < 0 || j < 0 || i >= rows || j >= cols || parent[i][j] != -1 || grid[i][j] != 1) 
        {
            return;
        }
        parent[i][j] = component;
        componentSize[component]++;
        for (int k = 0; k < 4; k++) 
        {
            dfs(parent, componentSize, component, i + dirX[k], j + dirY[k], grid, rows, cols);
        }
    }

    int MaxConnection(vector<vector<int>>& grid) 
    {
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<int>> parent(rows, vector<int>(cols, -1));
        vector<int> componentSize;
        int component = 0;

        for (int i = 0; i < rows; i++) 
        {
            for (int j = 0; j < cols; j++) 
            {
                if (grid[i][j] == 1 && parent[i][j] == -1) 
                {
                    componentSize.push_back(0);
                    dfs(parent, componentSize, component, i, j, grid, rows, cols);
                    component++;
                }
            }
        }

        int maxSize = 0;

        for (int i = 0; i < rows; i++) 
        {
            for (int j = 0; j < cols; j++) 
            {
                if (grid[i][j] == 0) 
                {
                    unordered_set<int> seenComponents;
                    int currentSize = 1; 
                    for (int k = 0; k < 4; k++) 
                    {
                        int x = i + dirX[k];
                        int y = j + dirY[k];
                        if (x >= 0 && y >= 0 && x < rows && y < cols && parent[x][y] != -1) 
                        {
                            int parentComponent = parent[x][y];
                            if (seenComponents.find(parentComponent) == seenComponents.end()) 
                            {
                                seenComponents.insert(parentComponent);
                                currentSize += componentSize[parentComponent];
                            }
                        }
                    }
                    maxSize = max(maxSize, currentSize);
                }
            }
        }

        for (int size : componentSize) 
        {
            maxSize = max(maxSize, size);
        }

        return maxSize;
    }
};
