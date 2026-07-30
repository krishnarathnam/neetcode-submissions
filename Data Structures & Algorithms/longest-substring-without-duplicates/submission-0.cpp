class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        for(int i =0;i<s.size();i++){
            unordered_set<char> ss;
            for(int j = i;j<s.size();j++){
                if(ss.find(s[j]) != ss.end()) break;
                ss.insert(s[j]);
            }

            res = max(res, (int)ss.size());
        }

        return res;
    }
};
