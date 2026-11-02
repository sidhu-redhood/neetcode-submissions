class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int m = strs.size();
        unordered_map<string, vector<string>> mp;
        for(int i = 0; i < m; i++) {
            int a[26] = {0};
            string s = strs[i];
            //sort(s.begin(), s.end());
            int n = s.length();
            string freq = "";
            for(int j = 0; j< n; j++){
                a[s[j] - 'a']++;
            }
            for(int k = 0; k < 26; k++){
                if(a[k] == 0) continue;
                freq = freq + (char)('a' + k);
                freq += to_string(a[k]);
            }
            mp[freq].push_back(strs[i]);
            // cout<<freq<<endl;

        }
        vector<vector<string>> result;
        
        for(const auto& [key, list]: mp){
            result.push_back(list);
        }

    return result;

    }
};
