class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0,r=0;
        int size = 0;
        int min_size = INT_MAX;

        for(int i = 0;i<nums.size();i++){
            size += nums[i];
            while(size >= target){
                min_size = min(min_size,i-l+1);
                size -= nums[l];
                l++;
            }

            cout << size <<endl;
        } 

        return min_size == INT_MAX ? 0 : min_size;
    }
};