class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = INT_MIN;
        int i = 0, j = heights.size() - 1;

        while(i < j){
            int b = j-i;
            int h = min(heights[i], heights[j]);
            int a = b*h;
            if(ans > a){
                j--;
            }else if(a> ans){
                i++;
                ans = a;
            }
        }

        return ans;
    }
};
