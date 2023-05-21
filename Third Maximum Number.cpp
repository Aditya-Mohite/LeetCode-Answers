class Solution 
{
public:
    int thirdMax(vector<int>& nums) 
    {
        long m1 = LONG_MIN;
        long m2 = LONG_MIN;
        long m3 = LONG_MIN;

        for (int i : nums)
        {
            if (m1 < i)
            {
                m3 = m2;
                m2 = m1;
                m1 = i;
            }
            else if (m2 < i && m1 > i)
            {
                m3 = m2;
                m2 = i;
            }
            else if (m2 > i && m3 < i)
            {
                m3 = i;
            }
        }
        if (m3 == LONG_MIN)
        {
            return m1;
        }
        else
        {
            return m3;
        }
    }
};

