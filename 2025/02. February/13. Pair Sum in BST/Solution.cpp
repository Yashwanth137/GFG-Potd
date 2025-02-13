class Solution 
{
  public:
    bool findTarget(Node *root, int target) 
    {
        if(root == NULL) return false;
        
        vector<int> arr;
        inorder(root, arr);
        
        int left = 0, right = arr.size()-1;
        
        while(left < right)
        {
            if(arr[left] + arr[right] == target)
            {
                return true;
            }
            else if(arr[left] + arr[right] <= target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        
        return false;
    }
    
  private:
    void inorder(Node *root, vector<int>& arr)
    {
        if(root == NULL) return;
        
        inorder(root->left, arr);
        arr.push_back(root->data);
        inorder(root->right, arr);
    }
};class Solution 
{
  public:
    bool findTarget(Node *root, int target) 
    {
        if(root == NULL) return false;
        
        vector<int> arr;
        inorder(root, arr);
        
        int left = 0, right = arr.size()-1;
        
        while(left < right)
        {
            if(arr[left] + arr[right] == target)
            {
                return true;
            }
            else if(arr[left] + arr[right] <= target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        
        return false;
    }
    
  private:
    void inorder(Node *root, vector<int>& arr)
    {
        if(root == NULL) return;
        
        inorder(root->left, arr);
        arr.push_back(root->data);
        inorder(root->right, arr);
    }
};
