class Solution 
{
  public:
    bool searchRowMatrix(vector<vector<int>> &mat, int x) 
    {
        for(const auto& row: mat)
        {
            int low = 0, high = row.size()-1;
            while(low <= high)
            {
                int mid = low + (high - low) / 2;
                if(row[mid] == x)
                {
                    return true;
                }
                else if(row[mid] > x)
                {
                    high = mid- 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
        }
        return false;
    }
};
