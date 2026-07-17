class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;
        for(auto num: nums){
            if(num != val){
                ans.push_back(num);
            }
        }


        for(int i = 0;i<ans.size();i++){
            nums[i] = ans[i];
        }
        return ans.size();
    }
};