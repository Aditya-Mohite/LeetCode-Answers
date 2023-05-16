// Remove duplicate elements from a sorted array

class Solution 
{
public:
    int removeDuplicates(vector<int>& nums) 
    {
        for (int i=0; i<nums.size(); i++)
        {
            for (int j=i+1; j<nums.size(); j++)
            {
                if(nums[i] == nums[j])
                {
                    nums.erase(nums.begin() + j);
                    j--;
                }
            }
        }
        return nums.size();
    }
};
