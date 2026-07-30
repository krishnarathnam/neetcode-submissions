class Solution {
public:
    int characterReplacement(string s, int k) {
       int l = 0;
       unordered_map<char,int> mp;
       int maxFreq = 0,max_window_size = 0;

        for(int r = 0;r<s.size();r++){
            mp[s[r]]++;
            maxFreq = max(maxFreq, mp[s[r]]);
            int window_size = (r-l)+1;
            while(window_size - maxFreq > k){
                mp[s[l]]--;
                l++;
                window_size = (r-l)+1;
            }
            max_window_size = max(max_window_size,window_size);
        } 

        return max_window_size;
    }
};
