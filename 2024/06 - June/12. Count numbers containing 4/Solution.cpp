class Solution 
{
  public:
    int countNumberswith4(int n) 
    {
        int res = 0;
        for(int i=1; i<n+1; i++)
        {
            string temp = to_string(i);
            if(temp.find('4') != string::npos)
                ++res;
        }
        return res;
    }
};
