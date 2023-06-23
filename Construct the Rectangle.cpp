class Solution 
{
    public:
    vector<int> constructRectangle(int area) 
    {
        int m = sqrt(area);
        while (m > 0)
        {
            if (area % m ==0)
            {
                return {area/m, m};

            }
            m--;
        }
        return {0,0};
    }
};
