class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> umap;

        for(auto x: nums){
            umap[x] += 1;
        }

        for(auto x:umap){
            if(x.first >= k){
                ans.push_back(x.first);
            }
        }

        return ans;
    }
};
