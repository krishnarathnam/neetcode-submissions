class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> umap;

        for(int num: nums){
            umap[num]++;
        }

        int m = 0;
        for(auto n: umap){
            cout << n.first << n.second << endl;
            if(n.second > nums.size()/2){
                m = max(m,n.first);
            }
        }

        return m;
    }
};