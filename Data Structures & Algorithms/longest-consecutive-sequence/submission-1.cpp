class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> m;

        for(auto n:nums){
            m[n]++;
        }

        int current = 1;
        int longest = 1;

        auto it = m.begin();
        auto prev= it++;

        while(it != m.end()){
            if(it->first == prev->first+1)
                current++;
            else
                current = 1;
            
            longest = max(longest,current);
            prev = it;
            ++it;
        }

        return longest;
    }
};
