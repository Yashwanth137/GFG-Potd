class Solution 
{
  public:
    vector<Node*> printAllDups(Node* root) 
    {
        unordered_map<string, int> mp;
        vector<Node*> ans;

        function<string(Node*)> solve = [&](Node* node) -> string 
        {
            if (!node) return "N";
            string s = to_string(node->data) + "," + solve(node->left) + "," + solve(node->right);
            mp[s]++;
            if (mp[s] == 2) 
            {
                ans.push_back(node);
            }
            return s;
        };
        solve(root);
        return ans;
    }
};
