class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> umap;

        for(auto x: nums){
            umap[x] += 1;
        }

        vector<pair<int,int>> arr;

        for(auto x: umap){
            arr.push_back({x.second,x.first});
        }

        sort(arr.begin(),arr.end(),greater<pair<int, int>>());

        for (int i = 0; i < k; i++)
            ans.push_back(arr[i].second);

        return ans;
    }
};
