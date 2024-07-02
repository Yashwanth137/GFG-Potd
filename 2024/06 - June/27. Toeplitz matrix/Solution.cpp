bool isToeplitz(vector<vector<int>>& mat) 
{
    int m = mat.size(), n = mat[0].size();
    for(int i=0; i<m-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(mat[i][j] != mat[i+1][j+1])
                return false;
        }
    }
    return true;
}
