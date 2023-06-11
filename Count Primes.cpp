class Solution 
{
    public:
    int countPrimes(int n) 
    {
        vector<bool> pn(n+1, true);
        pn[0] = false;
        pn[1] = false;

        for (int i=2; i*i<=n; i++)
        {
            if (pn[i])
            {
                for (int j=i*i; j<=n; j+=i)
                {
                    pn[j] = false;
                }
            }
        }

        // count nos
        int cnt = 0;
        for (int i=2; i<n; i++)
        {
            if (pn[i])
            {
                cnt++;
            }
        }

        return cnt;
    }
};
