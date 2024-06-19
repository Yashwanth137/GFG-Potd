class Solution 
{
public:
    double maxVolume(double p, double a) 
    {
        double l = (p - sqrt((p * p)- 24.0 * a)) / 12.0;
        double w = l;
        double h = p / 4.0 - 2.0 * l;
        double Vol = l * w * h;
        return Vol;
    }
};
