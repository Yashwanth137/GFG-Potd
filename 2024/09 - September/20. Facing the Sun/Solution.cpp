class Solution 
{
  public:
    int countBuildings(vector<int> &height) 
    {
        if (height.empty()) return 0;
        int res = 1, temp = height[0];
        for(int i=1; i<height.size(); i++)
        {
            if(height[i] > temp)
            {
                res++;
            }
            temp = max(temp, height[i]);
        }
        return res;
    }
};
