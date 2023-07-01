class Solution 
{
    public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
        
        vector<int> res;
        for(int i=left; i<=right; i++)
        {
            int cnt = 0;
            int num = i;
            while(num!=0)
            {
                int r = num%10;
                if(r==0 || i%r!=0)
                {
                    cnt = 1;
                    break;
                }
                num = num/10;
            }
            if (cnt==0)
            {
                res.push_back(i);
            }

            
        }   
        return res; 
    }
};
