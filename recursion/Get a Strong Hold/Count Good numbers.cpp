class Solution
{
    int mod = 1e9 + 7;

private:
    int power(int N, long long R)
    {
        if (R == 0)
        {
            return 1;
        }
        long long temp = power(N, R / 2);
        if (R % 2 == 0)
        {
            return ((temp * temp) % mod);
        }
        return ((temp * N % mod) * temp) % mod;
    }

public:
    int countGoodNumbers(long long n)
    {
        long long evenPlaces = (n + 1) / 2;
        long long oddPlaces = n - evenPlaces;
        return (1ll * (power(5, evenPlaces) % mod) * (power(4, oddPlaces) % mod)) % mod;
    }
};