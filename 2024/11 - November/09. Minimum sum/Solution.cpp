class Solution 
{
public:
    string minSum(vector<int> &arr) 
    {
        sort(arr.begin(), arr.end());
        
        string num1 = "", num2 = "";
        
        for (int i = 0; i < arr.size(); ++i) 
        {
            if (i % 2 == 0) 
            {
                num1 += to_string(arr[i]);
            } 
            else 
            {
                num2 += to_string(arr[i]);
            }
        }
        
        return addStrings(num1, num2);
    }

private:
    string addStrings(string num1, string num2) 
    {
        string result = "";
        int carry = 0, i = num1.size() - 1, j = num2.size() - 1;
        
        while (i >= 0 || j >= 0 || carry) 
        {
            int sum = carry;
            if (i >= 0) sum += num1[i--] - '0';
            if (j >= 0) sum += num2[j--] - '0';
            result += (sum % 10) + '0';
            carry = sum / 10;
        }
        
        reverse(result.begin(), result.end());
        
        int pos = 0;
        while (pos < result.size() && result[pos] == '0') 
        {
            ++pos;
        }
        return pos == result.size() ? "0" : result.substr(pos);
    }
};
