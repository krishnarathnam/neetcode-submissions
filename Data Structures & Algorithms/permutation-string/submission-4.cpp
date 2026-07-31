class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> mp;

        for(auto ch: s1){
            mp[ch]++;
        }

        if (s1.size() > s2.size()) return false;

        for(int i = 0;i<=s2.size() - s1.size();i++){
            unordered_map<char,int> p;
            for(int j = i;j<i+s1.size();j++){
                p[s2[j]]++;
            }

            if(mp == p) return true;
        }

        return false;
    }
};
