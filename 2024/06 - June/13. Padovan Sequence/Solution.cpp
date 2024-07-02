class Solution
{
    public:
    int padovanSequence(int n)
    {
        const int m = 1000000007;
        if(n == 0 || n == 1 || n == 2)
            return 1;
        int p0 = 1, p1 = 1, p2 = 1, pn;
        for(int i=3; i<=n; i++)
        {
            pn = (p0 + p1) % m;
            p0 = p1;
            p1 = p2;
            p2 = pn;
        }
        return p2;
    }
};
