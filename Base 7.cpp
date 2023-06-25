class Solution 
{
    public:
    string convertToBase7(int n) 
    {
        string ans = "";
        int num = abs(n);
        if (num == 0)
        {
            return "0";
        }

        int r;
        
        while (num != 0) {
            r = num % 7;
            num /= 7;
            ans.insert(0,to_string(r));
        }
        
        if (n < 0)
        {
            return "-"+ans;
        }

        return ans;
    }
};
