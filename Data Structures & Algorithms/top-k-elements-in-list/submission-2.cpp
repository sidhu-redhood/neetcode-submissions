class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
        for(int i: nums){
            mp[i]++;
        }
        for (auto const& [val, count] : mp) {
            if(pq.size() < k) pq.push({count, val});
            else if(count > pq.top().first) {
                pq.pop();
                pq.push({count, val});
            }
        }
        
        vector<int> result;
        while (!pq.empty()) {
            auto [key, val] = pq.top();
            pq.pop();
            result.push_back(val);
        }
        return result;
    }
};
