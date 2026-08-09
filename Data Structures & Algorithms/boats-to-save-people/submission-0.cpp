class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int ans = 0;
        int i = 0,j = people.size()-1;

        while(i<=j){
            int remain = limit-people[j--];
            ans++;
            while(i<=j && remain>=people[i]){
                i++;
            }
        }

        return ans;
    }
};