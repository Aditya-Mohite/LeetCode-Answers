class Solution 
{
    public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
        int index = 0;
       
        vector <string> res = {};

        if (nums.size() == 0)
        {
            return res;
        }
        
        for (int i = 0; i < nums.size()-1; i++)
        {
            if (nums[i+1] != nums[i]+1)
            {
                
                (index != i) ? res.push_back(to_string(nums[index])+"->"+to_string(nums[i])) : res.push_back(to_string(nums[index]));
                index = i+1;
            }
        }
        
        if (index != nums.size()-1) 
        {
            res.push_back(to_string(nums[index])+"->"+to_string(nums[nums.size()-1]));
        }
        else 
        {
            res.push_back(to_string(nums[index]));
        }
        
        return res;
    }
};
