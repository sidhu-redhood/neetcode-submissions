class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, vector<string>> mp;
        for(int i = 0; i < n; i++) {
            string s = strs[i];
            sort(s.begin(), s.end());
            mp[s].push_back(strs[i]);
        }

        vector<vector<string>> result;
        
        for(const auto& [key, list]: mp){
            result.push_back(list);
        }

return result;

    }
};
