class Solution 
{
public:
    int findPeakElement(vector<int>& a) 
    {
        int n = a.size();
        int res = 0;
        int low = 0;
        int high = n-1;
        
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            res = max(res, a[mid]);
            
            if(mid+1 < n && a[mid] < a[mid+1])
                low = mid+1;
            else
                high = mid-1;
        }
        return res;
    }
};
