class Solution 
{
public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N, int M, int src) 
    {
        vector<vector<int>> adj(N);
        for (const auto& edge : edges) 
        {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        vector<int> dist(N, numeric_limits<int>::max());
        queue<int> q;
        dist[src] = 0;
        q.push(src);
        
        while (!q.empty()) 
        {
            int node = q.front();
            q.pop();
            for (const auto& neighbor : adj[node]) 
            {
                if (dist[neighbor] > dist[node] + 1) 
                {
                    dist[neighbor] = dist[node] + 1;
                    q.push(neighbor);
                }
            }
        }
       
        for (int& d : dist) 
        {
            if (d == numeric_limits<int>::max()) 
            {
                d = -1;
            }
        }
        
        return dist;
    }
};
