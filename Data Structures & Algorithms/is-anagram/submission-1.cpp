#include<unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<string, int> map1;
        unordered_map<string, int> map2;
        for(int i = 0;i<s.size();i++){
            map1[s[i]] += 1
            map2[t[i]] += 1
        }

        for(int i = 0;i<s.size();i++){
            if(map1[i] != map2[i]) return false;
        }

        return true
    }
};
