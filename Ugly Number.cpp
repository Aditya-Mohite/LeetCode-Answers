class Solution 
{
    public:

    vector<int> v1 = {2,3,5};
    bool isUgly(int n) 
    {
        if (n<1)
        {
            return false;
        }

        for (int i : v1)
        {
            while(n%i == 0)
            {
                n = n/i;
            }
        }
        return n==1;
    }
};
