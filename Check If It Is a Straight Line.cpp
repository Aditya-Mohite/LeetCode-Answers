class Solution 
{
    public:
    bool checkStraightLine(vector<vector<int>>& coordinates) 
    {
        int y = coordinates[1][1] - coordinates[0][1];
        int x = coordinates[1][0] - coordinates[0][0];

        for (int i=2; i<coordinates.size(); i++)
        {
            auto c = coordinates[i];
            if ((coordinates[i][0]-coordinates[0][0])*y != (coordinates[i][1]-coordinates[0][1])*x)
            return false;
        }
        return true;
    }
};
