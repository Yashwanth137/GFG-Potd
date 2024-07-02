
class Solution {
public:
    string compareFrac(string inputStr) {
        vector<int> fractions(4, 0);
        int delimiterIndex;
        for(int currentNum = 0, i = 0; i < inputStr.size(); i++) {
            if(inputStr[i] == '/') {
                currentNum++;
                continue;
            }
            if(inputStr[i] == ',') {
                delimiterIndex = i;
                i++;
                currentNum++;
                continue;
            }
            fractions[currentNum] = fractions[currentNum] * 10 + (inputStr[i] - '0');
        }
        int leftProduct = fractions[0] * fractions[3];
        int rightProduct = fractions[1] * fractions[2];
        if(leftProduct == rightProduct)
            return "equal";
        if(leftProduct > rightProduct)
            return inputStr.substr(0, delimiterIndex);
        return inputStr.substr(delimiterIndex + 2, inputStr.size());
    }
};
