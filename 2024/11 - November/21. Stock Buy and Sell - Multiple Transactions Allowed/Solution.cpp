class Solution 
{
  public:
    int maximumProfit(vector<int> &prices) 
    {
        int profit = 0, i = 0;
        int p1 = prices[0], p2 = prices[0];
        
        while(i < prices.size() - 1)
        {
            while(i < prices.size() - 1 && prices[i] >= prices[i+1])
            {
                i++;
            }
            p1 = prices[i];
            
            while(i < prices.size() - 1 && prices[i] <= prices[i+1])
            {
                i++;
            }
            p2 = prices[i];
            
            profit += p2 - p1;
        }
        
        return profit;
    } 
};
