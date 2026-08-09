class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> m;

        for(auto n:nums){
            m[n]++;
        }

        int count = 0;
        for(int i = 0;i<nums.size();i++){
            auto it = m.find(i);

            if(it != m.end()){
                count++;
            }
        }

        return count;
    }
};
