class Solution 
{
  public:

    bool kPangram(string inputStr, int k) 
    {
        unordered_map<char,int> charCountMap;
        int duplicateCount = 0;
        
        for(int i = 0; i < inputStr.size(); i++)
        {
            if(!isalpha(inputStr[i]))
            {
                continue;
            }
            if(charCountMap[inputStr[i]] == 1)
            {
                duplicateCount++;
            }
            else
            {
                charCountMap[inputStr[i]] = 1;
            }
        }
        
        int additionalCharsRequired = 0;
        for(char ch = 'a'; ch <= 'z'; ch++)
        {
            if(duplicateCount == 0)
            {
                break;
            }
            
            if(charCountMap[ch] == 0 && duplicateCount > 0)
            {
                charCountMap[ch] = 1;
                duplicateCount--;
                additionalCharsRequired++;
            }
        }
 
        for(char ch = 'a'; ch <= 'z'; ch++)
        {
            if(charCountMap[ch] == 0)
            {
                return false;
            }
        }
        if(additionalCharsRequired <= k)
        {
            return true;
        }
        return false;
        
    }
};
