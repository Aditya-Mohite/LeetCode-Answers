class Solution 
{
    public:
    int smallestRangeI(vector<int>& nums, int k) 
    {
        sort(nums.begin(), nums.end());

        int min = nums[0]+k;
        int max = nums[nums.size()-1]-k;
        if(max-min<0)
        return 0;
        else
        return max-min;
    }
};
