class Solution 
{
    public:
    vector<int> powerfulIntegers(int x, int y, int bound) 
    {
        vector<int> sol;

        for(int i=1; i<bound; i*=x)
        {
            for (int j=1; i+j<=bound; j*=y)
            {
                sol.push_back(i+j);
                if (y==1)
                {
                    break;
                }
            }
            if(x==1)
            break;
        }

        auto end = sol.end();
        for (auto it = sol.begin(); it != end; ++it) 
        {
            end = remove(it + 1, end, *it);
        }
    
        sol.erase(end, sol.end());

        return sol;
    }
};
