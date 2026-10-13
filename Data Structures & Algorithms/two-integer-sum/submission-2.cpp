class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            auto it = mp.find(target-nums[i]);
            if(it == mp.end()){
                mp.insert({nums[i], i});
            }
            else{
                return {it->second, i};
            }
        }
        return {};
    }
};
