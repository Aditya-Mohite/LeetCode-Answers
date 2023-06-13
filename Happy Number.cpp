class Solution 
{
    public:
    bool isHappy(int num) 
    {
        
        if (num == 7)
        {
            return true;
        }
        else if (num < 10) 
        {
            return (num != 1) ? false : true;
        }
    
        else 
        {
            int sum = 0;

            while (num != 0) 
            {
                sum = sum + pow((num%10), 2);
                num = num/10;
            }
            
            return isHappy (sum);

        }
    }
};
