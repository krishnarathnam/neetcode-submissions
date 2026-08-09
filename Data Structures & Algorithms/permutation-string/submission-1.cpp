class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int> mp;

        for(auto ch: s1){
            mp[ch]++;
        }

        for(int i = 0;i<s2.size()-s1.size();i++){
            map<char,int> p;
            for(int j = i;j<i+s1.size();j++){
                p[s2[j]]++;
            }

            if(mp == p) return true;
        }

        return false;
    }
};
