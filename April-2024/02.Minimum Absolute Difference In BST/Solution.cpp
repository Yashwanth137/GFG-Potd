class Solution {
    void inOrderTraversal(Node* rootNode , vector<int>& resultArray){
        if(rootNode == nullptr) return;

        inOrderTraversal(rootNode->left , resultArray);
        resultArray.push_back(rootNode->value);
        inOrderTraversal(rootNode->right , resultArray);
    }

public:
    int minAbsoluteDifference(Node *rootNode) {
        int minimumDifference = INT_MAX;
        vector<int> valuesArray;
        inOrderTraversal(rootNode , valuesArray);
        
        for(int i = 0 ; i < valuesArray.size()-1 ; i++){
            minimumDifference = min(minimumDifference , abs(valuesArray[i]-valuesArray[i+1]));
        }
        return minimumDifference;
    }
};
