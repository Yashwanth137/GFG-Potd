class Solution 
{
public:
    bool areAnagrams(const string& s1, const string& s2) 
    {
        if (s1.size() != s2.size()) 
            return false;

        unordered_map<char, int> freq;

        for (char ch : s1)
            freq[ch]++;
        
        for (char ch : s2)
        {
            if (freq.find(ch) == freq.end() || freq[ch] == 0)
                return false;
            freq[ch]--;
        }

        return true;
    }
};
