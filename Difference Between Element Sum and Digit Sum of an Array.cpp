class Solution 
{
    public:
    int differenceOfSum(vector<int>& nums) 
    {
        int x = 0, y = 0;

        // for 'x' --> sum of digits
        for(int i=0; i<nums.size(); i++)
        {
            y = y + nums[i];
            if(nums[i]>9)
            {
                int n = nums[i];
                while(n>0)
                {
                    int d = n%10;
                    x = x + d;
                    n = n/10;
                }
            }
            else if(nums[i]<=9)
            {
                x = x + nums[i];
            }
        }


        return abs(x-y);
    }
};
