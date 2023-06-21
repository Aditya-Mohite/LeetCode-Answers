class Solution 
{
    public:
    bool isPerfectSquare(int num) 
    {
        int n;
        if (num>=0)
        {
            n = sqrt(num);
          
        }
        if (num == n*n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
