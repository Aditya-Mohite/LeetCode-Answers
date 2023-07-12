class Solution 
{
    public:
    double angleClock(int hour, int minutes) 
    {
        if (hour == 12)
        hour = 0;
        if (minutes == 60)   // 0.5*((60 * h) + m)
        minutes = 0;
        double ha = 0.5*((60*hour) + minutes);
        double ma = 6*minutes;
        double angle = abs(ha - ma);
        return min(360-angle, angle);
    }
};
