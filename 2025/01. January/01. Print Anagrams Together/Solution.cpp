class Solution {
public:
    vector<vector<string>> anagrams(vector<string>& words) {
        unordered_map<string, vector<string>> anagramGroups;

        for (string& word : words) {
            string key = word;
            sort(key.begin(), key.end());
            anagramGroups[key].push_back(word);
        }
        
        vector<vector<string>> groupedAnagrams;
        for (auto& group : anagramGroups) {
            groupedAnagrams.push_back(group.second);
        }
        
        return groupedAnagrams;
    }
};
