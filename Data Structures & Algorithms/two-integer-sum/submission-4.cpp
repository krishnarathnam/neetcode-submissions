class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0;i<nums.size();i++){
            int n= nums[i];
            int b = target - n;
            for(int j = i+1;j<nums.size();j++){
                if(nums[j] == b){
                    return {i,j};
                }
            }
        }
    }
};
