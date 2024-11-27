class Solution 
{
public:
    int missingNumber(vector<int> &arr) 
    {
        int n = arr.size(), pos = 0, num = 0;
        sort(arr.begin(), arr.end());
        while(arr[pos] < 0)
        {
            pos++;
        }
        
        for (int i = pos; i < n; i++) 
        {
            if (arr[i] != num + 1) 
            {
                return num + 1;
            }
            num++;
        }
        
        return n + 1;
    }
};
