class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i = 0;i<numbers.size();i++){
            int a = target - numbers[i];
            for(int j = i+1;j<numbers.size();j++){
                if (numbers[j] == numbers[i]) continue;
                if(numbers[j] == a){
                    return {i+1, j+1};
                }
            }
        }
    }
};
