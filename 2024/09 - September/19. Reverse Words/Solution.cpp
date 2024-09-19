class Solution 
{
  public:
    string reverseWords(string str) 
    {
        stringstream ss(str);
        string word;
        vector<string> words;
        
        while (getline(ss, word, '.'))
        {
            words.push_back(word);
        }
        
        reverse(words.begin(), words.end());
        
        string res;
        for(size_t i=0; i < words.size(); i++)
        {
            res += words[i];
            if (i != words.size() - 1) 
            {
                res += ".";
            }
        }
        
        return res;
    }
};
