class Solution {
public:
    int findMin(vector<int> &nums) {
        int i = 0,j = nums.size()-1;    

        while(i<j){
            int m = i + (j-i)/2;
            if(nums[m] == 0) return 0;

            if(nums[i] < nums[j]) i = m + 1;
            else if(nums[i] > nums[j]) j = m-1;
        }

        return i;
    }
};
