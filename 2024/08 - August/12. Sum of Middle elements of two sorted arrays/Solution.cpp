class Solution 
{
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) 
    {
        int res = 0;
        arr1.insert(arr1.end(), arr2.begin(), arr2.end());
        sort(arr1.begin(), arr1.end());
        if(arr1.size() % 2 == 0)
        {
            res = arr1[arr1.size()/2-1] + arr1[arr1.size()/2];
        }
        else
        {
            res = arr1.size();
        }
        return res;
    }
};
