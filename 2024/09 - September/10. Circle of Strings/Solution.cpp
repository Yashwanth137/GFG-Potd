class Solution 
{
public:
    int isCircle(vector<string>& arr) 
    {
        vector<int> inDegree(26, 0), outDegree(26, 0);
        vector<vector<int>> adj(26);

        for (const auto& word : arr) 
        {
            char start = word.front() - 'a';
            char end = word.back() - 'a';
            outDegree[start]++;
            inDegree[end]++;
            adj[start].push_back(end);
        }

        for (int i = 0; i < 26; ++i) 
        {
            if (inDegree[i] != outDegree[i]) 
            {
                return 0;
            }
        }

        vector<bool> visited(26, false);
        int startNode = -1;

        for (int i = 0; i < 26; ++i) 
        {
            if (outDegree[i] > 0) 
            {
                startNode = i;
                break;
            }
        }

        if (startNode == -1) 
        {
            return 0;
        }

        dfs(startNode, adj, visited);

        for (int i = 0; i < 26; ++i) 
        {
            if ((inDegree[i] > 0 || outDegree[i] > 0) && !visited[i]) 
            {
                return 0;
            }
        }

        return 1;
    }

private:
    void dfs(int node, const vector<vector<int>>& adj, vector<bool>& visited) 
    {
        visited[node] = true;
        for (int neighbor : adj[node]) 
        {
            if (!visited[neighbor]) 
            {
                dfs(neighbor, adj, visited);
            }
        }
    }
};
