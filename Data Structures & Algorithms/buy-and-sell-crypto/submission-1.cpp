class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curr_price = prices[0];
        int curr_profit = 0;
        int max_profit = 0;

        for(int i = 1;i<prices.size();i++){
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
