class Solution 
{
    public:
    int missingNumber(vector<int>& nums) 
    {
        if (nums.size() == 1 && nums[0] != 0)
        {
            return nums[0]-1;
        }
        sort(nums.begin(), nums.end());
        int val = 0;

        for (int i=0; i<nums.size(); i++)
        {
            if (nums[i] != val++)
            {
                return val-1;
            }
        }
        
    return val;
    }
};
