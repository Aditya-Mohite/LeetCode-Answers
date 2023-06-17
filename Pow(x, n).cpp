class Solution 
{
    public:
    double myPow(double x, int n) 
    {
        double ans = 0;
        if (n==0)
        {
            return 1;
        }
        else
        {
            
            ans = pow(x, n);
        }
        return ans;
    }
};
