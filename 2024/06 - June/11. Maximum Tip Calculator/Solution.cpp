class Solution 
{
  public:
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) 
    {
        vector<tuple<int, int, int>> tips;
        for (int i = 0; i < n; ++i) 
        {
            tips.push_back(make_tuple(arr[i], brr[i], i));
        }
        
        sort(tips.begin(), tips.end(), [](const tuple<int, int, int>& a, const tuple<int, int, int>& b) 
        {
            return abs(get<0>(a) - get<1>(a)) > abs(get<0>(b) - get<1>(b));
        });
        
        long long res = 0;
        int countX = 0, countY = 0;
        
        for (int i = 0; i < n; ++i) 
        {
            int a = get<0>(tips[i]);
            int b = get<1>(tips[i]);
            
            if((a >= b && countX < x) || countY == y) 
            {
                res += a;
                countX++;
            } 
            else 
            {
                res += b;
                countY++;
            }
        }
        
        return res;
    }
};
