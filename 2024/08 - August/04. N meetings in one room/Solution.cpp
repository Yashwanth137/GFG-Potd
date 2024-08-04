class Solution 
{
  public:
    int maxMeetings(int n, int start[], int end[]) 
    {
        vector<pair<int, int>> meetings;
        for(int i = 0; i < n; i++) 
        {
            meetings.push_back({end[i], start[i]});
        }
        
        sort(meetings.begin(), meetings.end());
        
        int count = 0;
        int last_end_time = -1;
        
        for(int i = 0; i < n; i++) 
        {
            if(meetings[i].second > last_end_time) 
            {
                count++;
                last_end_time = meetings[i].first;
            }
        }

        return count;
    }
};
