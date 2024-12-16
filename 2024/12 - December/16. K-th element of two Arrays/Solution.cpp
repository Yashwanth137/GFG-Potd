class Solution 
{
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) 
    {
        int n = a.size(), m = b.size();
        
        if(n > m) return kthElement(b, a, k);
        
        int left = max(0, k-m), right = min(k,n);
        
        while(left <= right)
        {
            int i = left + (right - left) / 2;
            int j = k - i;
            
            int aleft = (i > 0) ? a[i - 1] : INT_MIN;
            int bleft = (j > 0) ? b[j - 1] : INT_MIN;
            int aright = (i < n) ? a[i] : INT_MAX;
            int bright = (j < m) ? b[j] : INT_MAX;
            
            if(aleft <= bright && bleft <= aright)
            {
                return max(aleft, bleft);
            }
            else if(aleft > bright)
            {
                right = i - 1;
            }
            else
            {
                left = i + 1;
            }
        }
        
        return -1;
    }
};
