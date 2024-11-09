class Solution 
{
public:
    int minRepeats(string& s1, string& s2) 
    {
        string repeatedS1 = s1;
        int count = 1;
        
        while (repeatedS1.size() < s2.size()) 
        {
            repeatedS1 += s1;
            count++;
        }
        
        if (repeatedS1.find(s2) != string::npos) return count;
        
        repeatedS1 += s1;
        count++;
        
        if (repeatedS1.find(s2) != string::npos) return count;
        
        return -1;
    }
};
