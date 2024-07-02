class Solution 
{
  public:
    int minSteps(int d) 
    {
        int pos=0,step=0;
        while(pos<d||((pos-d)%2!=0))
        {
            step++;
            pos+=step;
            
        }
        return step;
    }
};
