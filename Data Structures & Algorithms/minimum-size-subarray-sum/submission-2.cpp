class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0,r=0;
        int size = 0;
        int min_size = 10000;
        bool found = false;

        for(int i = 0;i<nums.size();i++){
            size += nums[i];
            if(size < target) r++;
            else if(size >= target){
                size -= nums[l];
                l++;
                min_size = min(min_size,r-l+1);
                found = true;
            }

            cout << size <<endl;
        } 

        if (found == true) return min_size ;
        else return 0;
    }
};