class Solution 
{
public:
    string doIntersect(int p1[], int p2[], int q1[], int q2[]) 
    {
        double m1, m2;
        bool p1p2Vertical = (p2[0] == p1[0]);
        bool q1q2Vertical = (q2[0] == q1[0]);
        
        if (!p1p2Vertical) 
        {
            m1 = (p2[1] - p1[1]) / double(p2[0] - p1[0]);
        }
        
        if (!q1q2Vertical) 
        {
            m2 = (q2[1] - q1[1]) / double(q2[0] - q1[0]);
        }
        
        double v11 = p1p2Vertical ? (q1[0] - p1[0]) : (m1 * (p1[0] - q1[0]) - (p1[1] - q1[1]));
        double v12 = p1p2Vertical ? (q2[0] - p1[0]) : (m1 * (p1[0] - q2[0]) - (p1[1] - q2[1]));
        double v21 = q1q2Vertical ? (p1[0] - q1[0]) : (m2 * (q1[0] - p1[0]) - (q1[1] - p1[1]));
        double v22 = q1q2Vertical ? (p2[0] - q1[0]) : (m2 * (q1[0] - p2[0]) - (q1[1] - p2[1]));

        if ((v11 * v12 > 0) || (v21 * v22 > 0)) return "false";
        return "true";
    }
};
