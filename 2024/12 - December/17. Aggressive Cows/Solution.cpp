class Solution 
{
  public:
    bool canPlaceCows(vector<int>& stalls, int k, int dist) 
    {
        int cowsPlaced = 1;
        int lastPosition = stalls[0];
        
        for (int i = 1; i < stalls.size(); i++) 
        {
            if (stalls[i] - lastPosition >= dist) 
            {
                cowsPlaced++;
                lastPosition = stalls[i];
                if (cowsPlaced == k) 
                {
                    return true;
                }
            }
        }
        return false;
    }

    int aggressiveCows(vector<int>& stalls, int k) 
    {
        sort(stalls.begin(), stalls.end());
        
        int low = 1;
        int high = stalls.back() - stalls[0];
        int result = 0;
        
        while (low <= high) 
        {
            int mid = low + (high - low) / 2;
            
            if (canPlaceCows(stalls, k, mid)) 
            {
                result = mid;
                low = mid + 1;
            } 
            else 
            {
                high = mid - 1;
            }
        }
        
        return result;
    }
};
