class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto num:nums){
            mp[num]++;
        }

        for(int n = 1;n<nums.size();n++){
            if(mp[n] > 1) return n;
        }
    }
};
