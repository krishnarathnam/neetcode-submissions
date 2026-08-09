class Solution {
public:
    bool modifiedBinarySearch(vector<int>& nums, int target, int l,int r){
        if(l>r) return false;
        int mid = l + (r-l)/2;

        if(nums[mid] == target) return true;


        if(nums[mid] >= nums[l]){
            if(nums[l] <= target && target <= nums[mid]){
                return modifiedBinarySearch(nums,target,l,mid-1);
            }else{
                return modifiedBinarySearch(nums,target,mid+1,r);
            }
        }else{
            if(nums[mid] <= target && target <= nums[r]){
                return modifiedBinarySearch(nums,target,mid+1,r);
            }else{
                return modifiedBinarySearch(nums,target,l,mid-1);
            }
       }

       return false;
    }
    bool search(vector<int>& nums, int target) {
        return modifiedBinarySearch(nums,target,0,nums.size()-1);
    }
};