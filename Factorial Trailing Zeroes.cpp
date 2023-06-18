class Solution 
{
    public:
    int trailingZeroes(int n) 
    {
        int zeroes = 0;
        int num = 5;
        while (n/num >= 1)
        {
            zeroes = zeroes + n/num;
            num = num*5;
        }
        return zeroes;
    }
};
