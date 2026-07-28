class Solution {
public:

    int modifiedBinarySearch(vector<int>& nums, int target, int l, int r){
        if(l > r) return -1;

        int mid = l + (r-l)/2;

        if(nums[mid] == target) return mid;

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

        return -1;
    }

    int search(vector<int>& nums, int target) {
        return modifiedBinarySearch(nums,target,0,nums.size()-1);

    }
};
