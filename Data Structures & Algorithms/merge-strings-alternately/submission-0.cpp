class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int i =0;
        int n = min(word1.length(),word2.length());
        for(i = 0;i<n;i++){
            ans += word1[i];
            ans += word2[i];
        }

        if(word1.length() == word2.length()){
            return ans;
        }else{
            n = max(word1.length(),word2.length());
            for(int j = i;j<n;j++){
                if(word1.length() > word2.length()){
                    ans += word1[j];
                }else{
                    ans += word2[j];
                }
            }

            return ans;
        }
    }
};