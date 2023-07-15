class Solution 
{
    public:
    int uniquePaths(int m, int n) 
    { 
        int temp = max(m,n)-1, total = m+n-2;

        if (temp > total) 
        return 0;

        if (temp == 0 || total == temp) 
        return 1;

        double res = 0;

        for (int i = 0; i < temp; i++) {

            res += log(total-i) - log(i+1);
        }

        return (int)round(exp(res));

    }

};
