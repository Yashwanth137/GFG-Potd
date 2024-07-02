class Solution 
{
public:
    vector<int> getPrimes(int n) 
    {
        if (n < 4) 
            return {-1, -1}; 

        vector<int> primes;
        for (int i = 2; i <= n; ++i) 
        {
            if (isPrime(i))
                primes.push_back(i);
        }

        for (int prime : primes) 
        {
            if (prime > n / 2) break;
            if (isPrime(n - prime)) 
                return {prime, n - prime};
        }

        return {-1, -1};
    }

private:
    bool isPrime(int num) 
    {
        if (num <= 1) return false;
        if (num == 2 || num == 3) return true;
        if (num % 2 == 0 || num % 3 == 0) return false;
        for (int i = 5; i * i <= num; i += 6) 
            if (num % i == 0 || num % (i + 2) == 0) return false;
        return true;
    }
};
