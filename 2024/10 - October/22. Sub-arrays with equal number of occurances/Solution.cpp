class Solution 
{
  public:
    int sameOccurrence(vector<int>& arr, int x, int y) 
    {
        int res = 0;
        unordered_map<int, int> freqMap;
        freqMap[0] = 1;
        int countX = 0, countY = 0;

        for (int i = 0; i < arr.size(); ++i) 
        {
            if (arr[i] == x) countX++;
            if (arr[i] == y) countY++;
            int diff = countX - countY;
            res += freqMap[diff];
            freqMap[diff]++;
        }

        return res;
    }
};
