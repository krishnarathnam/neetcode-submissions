#include <unordered_map>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> fmap;
        for(int n: nums){
            fmap[n] += 1;
        }

        for(auto p: fmap){
            if(p.second > 1){
                return true;
            }
        }

        return false;
    }
};