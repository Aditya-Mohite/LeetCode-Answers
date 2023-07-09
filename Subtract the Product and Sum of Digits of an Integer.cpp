class Solution 
{
    public:
    int subtractProductAndSum(int n) 
    {
        int sum = 0;
        int mul = 1;

        while (n > 0)
        {
            mul *= n%10;
            sum = sum + n%10;
            n = n/10;
        }

        return (mul-sum);
    }
};
