class Solution 
{
  public:
    Node* constructLinkedMatrix(vector<vector<int>>& mat) 
    {
        int n = mat.size();
        Node* res[n][n];
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                res[i][j] = new Node(mat[i][j]);
                if(j > 0)
                {
                    res[i][j-1]->right = res[i][j];
                }
                if(i > 0)
                {
                    res[i-1][j]->down = res[i][j];
                }
            }
        }
        
        return res[0][0];
    }
};
