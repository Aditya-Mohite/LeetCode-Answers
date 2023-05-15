class Solution 
{
public:
    int singleNumber(vector<int>& myVector) 
    {
        int m = 0;
        int n = 1;

        while (true)
        {
            if (n == myVector.size())
            {
                return myVector[m];
            }
            else if (myVector[m] == myVector[n])
            {
                myVector.erase(myVector.begin() + m);
                myVector.erase(myVector.begin() + (n-1));
                m = 0;
                n = 0;
            }

            n++;
        }
    }
};
