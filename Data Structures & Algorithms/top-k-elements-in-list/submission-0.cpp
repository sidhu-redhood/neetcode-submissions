class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int i: nums){
            mp[i]++;
        }
        vector<pair<int, int>> vec(mp.begin(), mp.end());
        sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.second != b.second) {
                return a.second > b.second;
            }
        return a.first < b.first;
        });
        vector<int> result;
        for(const auto&p: vec){
            if(k==0) break;
            result.push_back(p.first);
            k--;
        }
        return result;
    }
};
