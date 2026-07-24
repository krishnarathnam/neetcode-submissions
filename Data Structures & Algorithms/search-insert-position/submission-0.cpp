class Solution {
public:
    int binarySearch(int l,int r,vector<int>&nums, int target){
        while(l<=r){
            int m = l + (r-l)/2;

            if(nums[m] > target){
                r = m-1;
            }else if(nums[m] < target){
                l = m+1;
            }else if(nums[m] == target) return m;
        }

        return l;
    }
    int searchInsert(vector<int>& nums, int target) {
        return binarySearch(0,nums.size()-1,nums,target);
    }
};