class Solution 
{
    public:
    int reverse(int x) 
    {
        // int temp = x;  
        int remainder;

        long reverse = 0;
        while (x)
        {
            if (reverse > INT_MAX/10 || reverse < INT_MIN/10)  // we want only 32 bit range
            return 0;
            else
            remainder = x % 10;
            reverse = reverse*10 + remainder;
            x = x/10;
        }

        return int(reverse);
    }
};
