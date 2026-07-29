class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curr_price = 0;
        int curr_profit = 0;
        int max_profit = 0;

        for(int i = 0;i<prices.size();i++){
            if(i == 0){ 
                curr_price = prices[i];
                continue;
            }

            if(curr_price > prices[i]){
                curr_price = prices[i];
            }else{
                curr_profit = prices[i]-  curr_price ;
                max_profit = max(max_profit,curr_profit);
            }
        }

        return max_profit;
    }
};
