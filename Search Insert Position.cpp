class Solution 
{
public:
    int searchInsert(vector<int>& nums, int target) 
    {
       int size = nums.size();
       int max = size-1;
       int min = 0;
       int mid;

       while (max > min)
       {
           mid = (max + min)/2;

           if (nums[mid] == target)
           {
               return mid;
           }
           else if (nums[mid] > target)
           {
               max = mid-1;
           }
           else 
           {
               min = mid+1;
           }
       }

       for (int i=0; i<nums.size(); i++)
       {
           if (target  <= nums[i]) 
           {
             return i;
           }
       }
       return nums.size();
    }
    
};
