class Solution 
{
  public:
    bool compute(Node* head) 
    {
        string res = "";
        string rev_res = "";
        while(head != NULL)
        {
            res += head->data;
            head = head->next;
        }
        rev_res = res;
        reverse(rev_res.begin(), rev_res.end());
        return res == rev_res;
    }
};
