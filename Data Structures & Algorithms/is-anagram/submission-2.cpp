#include<unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;
        for(auto c: s){
            map1[c] += 1;
        }

        for(auto c: t){
            map2[c] += 1;
        }

        for(auto c: t){
            if(map1[c] != map2[c]) return false;
        }
        
        return true;
    }
};
