class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int minWeight = 0;
        int maxWeight = 0;

        for(auto w:weights){
            minWeight = max(minWeight,w);
            maxWeight += w;
        }


        while(minWeight < maxWeight){
            int mid = minWeight + (maxWeight-minWeight) /2;

            int day = 1;
            int sum = 0;
            for(int w:weights){
                if(sum+w>mid){
                    day++;
                    sum = 0;
                }
                sum += w;
            }

            if (day<=days) maxWeight = mid;
            else minWeight = mid+1;
        }

        return minWeight;
        
    }
};