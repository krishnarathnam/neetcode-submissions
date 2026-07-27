class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int minSpeed = 1;
        int maxSpeed = 0;
        int res = 0;
        for(auto p:piles)
            maxSpeed = max(maxSpeed,p);

        while(minSpeed < maxSpeed){
            int m = minSpeed + (maxSpeed-minSpeed) /2;

            int hour = 0;

            for(auto p:piles)
                hour += (int) ceil((double) p/m);

            if(hour <= h){
                maxSpeed = m;
            }else{
                minSpeed = m+1;
            }
        }

        return minSpeed;
    }
};
