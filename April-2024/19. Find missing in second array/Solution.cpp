class Solution{
 
 public:
 vector<int> findMissing(int a[], int b[], int n, int m) 
 { 
     vector<int>ans;
     int i=0;
     unordered_map<int,bool>mp;
     for(i;i<m;i++){
         mp[b[i]] = true;
     }
     for(i=0;i,i<n;i++){
         if(!mp[a[i]])ans.push_back(a[i]);
     }
     return ans;
 }
};
