class Solution 
{
  public:
    int maxStep(vector<int>& arr) 
    {
        int temp = 0, res = 0;
        for(int i=0; i+1<arr.size(); i++)
        {
            if(arr[i+1] > arr[i])
            {
                temp++;
            }
            else
            {
                temp = 0;
            }
            res = max(res, temp);
        }
        return res;
    }
};
