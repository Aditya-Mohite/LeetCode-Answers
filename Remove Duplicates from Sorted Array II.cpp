class Solution 
{
    public:
    int removeDuplicates(vector<int>& nums) 
    {
        int i = 0;
        int cnt = 0;
        
        if (nums.size() < 2)
        {
            return nums.size();
        }
        
        while (i < nums.size()-1)
        {
            if (nums[i] == nums[i+1])
            {
                cnt++;
                if (cnt > 1)
                {
                    nums.erase(nums.begin()+i+1);
                    i--;
                }
            }
            else 
            {
                cnt = 0;
            }
            i++;
        }
    return nums.size() ;
    }
};
