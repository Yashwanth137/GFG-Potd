class Solution 
{
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) 
    {
        vector<int> res;
        int rowSt = 0, rowE = mat.size()-1, colSt = 0, colE = mat[0].size()-1;
        
        while(rowSt <= rowE && colSt <= colE)
        {
            for(int i=colSt; i<=colE; i++)
            {
                res.push_back(mat[rowSt][i]);
            }
            rowSt++;
            
            for(int i=rowSt; i<=rowE; i++)
            {
                res.push_back(mat[i][colE]);
            }
            colE--;
            
            if(rowSt <= rowE)
            {
                for(int i=colE; i>=colSt; i--)
                {
                    res.push_back(mat[rowE][i]);
                }
                rowE--;
            }
            
            if(colSt <= colE)
            {
                for(int i=rowE; i>=rowSt; i--)
                {
                    res.push_back(mat[i][colSt]);
                }
                colSt++;
            }
            
        }
        
        return res;
    }
};
