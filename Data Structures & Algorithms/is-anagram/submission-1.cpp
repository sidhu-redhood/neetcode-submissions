class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        int count[26] = {0};
        for(char c: s) count[c - 'a']++;
        for(char x: t){
            if(--count[x - 'a'] < 0) return false;
        }
        //sort(s.begin(), s.end());
        //sort(t.begin(), t.end());
        // if(s != t)
        //     return false;
        return true;
    }
};
