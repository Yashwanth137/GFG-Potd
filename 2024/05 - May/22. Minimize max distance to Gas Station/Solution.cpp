class Solution 
{
public:
    double findSmallestMaxDist(vector<int>& a, int k) 
    {
        int n = a.size();
        double maxv = INT_MIN;
        
        for(int i = 1; i < n; i++)
            maxv = max(maxv, (double) a[i] - a[i - 1]);
            
        double low = 0, high = maxv, diff = 0.000001;
        while(high - low > diff) 
        {
            int cnt = 0;
            double mid = low + (high - low) / 2;
            for(int i = 0; i < n - 1; i++) 
            {
                double nstations = ((double) a[i + 1] - a[i]) / mid;
                cnt += (int) nstations;
            }
            
            if(cnt <= k)
                high = mid;
            else
                low = mid;
        }
        
        return high;
    }
};
