class Solution 
{
public:
    int findWinner(int n, int x, int y) 
    {
        vector<int> res(n + 1, -1);

        function<int(int)> get = [&](int num) 
        {
            if (num <= 1)
                return num;
            if (res[num] != -1)
                return res[num];

            int ans = 1;
            if (num >= x)
                ans &= get(num - x);
            if (num >= y)
                ans &= get(num - y);
            ans &= get(num - 1);

            return res[num] = ans ^ 1; 
        };

        return get(n);
    }
};
