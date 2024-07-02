class Solution 
{
  public:
    int rectanglesInCircle(int r) 
    {
        int num = 4*r*r, res = 0, temp = -1, diff = -1;
        for(int i = 1; ; ++i) 
        {
            diff = num - i*i;
            if(diff <= 0) 
                break;
            temp = (int)pow(diff, 0.5);
            if(temp == 0)
                break;
            res += temp;
        }
        return res;
    }
};
