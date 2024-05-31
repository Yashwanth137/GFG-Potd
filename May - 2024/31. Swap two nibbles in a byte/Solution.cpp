class Solution 
{
  public:
    int swapNibbles(int n) 
    {
        int leftNibble = (n & 0xF0) >> 4; 
        int rightNibble = (n & 0x0F) << 4; 
        int res = leftNibble | rightNibble;
        return res;
    }
};
