class Solution 
{
    public:
    int candy(vector<int>& ratings) 
    {
        int sum = 0;
        int n = ratings.size();
        vector<int> add(n, 1);   
        
        for (int i=1; i<n; i++)
        {
            if (ratings[i] > ratings[i-1])
            {
                add[i] = add[i-1]+1;
            }
        }

        for (int i=n-1; i>0; --i)
        {
            if (ratings[i-1] > ratings[i])
            {
                add[i-1] = max(add[i]+1, add[i-1]);
            }
        }

        if (n == 1)
        {
            return 1;
        }

        // sum
        for(int i : add)
        {
            sum = sum + i;
        }

        return sum;
    }
};
