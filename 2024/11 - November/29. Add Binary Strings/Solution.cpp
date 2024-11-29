class Solution 
{
public:
    string addBinary(string& s1, string& s2) 
    {
        int n1 = s1.size(), n2 = s2.size();
        int i = n1 - 1, j = n2 - 1;
        int carry = 0;
        string result = "";
        
        while (i >= 0 || j >= 0 || carry) 
        {
            int bit1 = (i >= 0) ? s1[i] - '0' : 0;
            int bit2 = (j >= 0) ? s2[j] - '0' : 0;
            
            int sum = bit1 + bit2 + carry;
            result += (sum % 2) + '0';
            carry = sum / 2;
            
            i--;
            j--;
        }
        
        reverse(result.begin(), result.end());
        
        int start = 0;
        while (start < result.size() && result[start] == '0') 
        {
            start++;
        }
        
        return (start == result.size()) ? "0" : result.substr(start);
    }
};
