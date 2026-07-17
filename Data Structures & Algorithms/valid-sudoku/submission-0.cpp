class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> uset;

        for(int i = 0;i<9;i++){
            for(int j = 0;j<9;j++){
                char num = board[i][j];
                if(num == '.') continue;

                if(uset.count(string(1,num) + "at row" + to_string(i))||
                uset.count(string(1,num) + "at col" + to_string(j))||
                uset.count(string(1,num) + "at box" + to_string(i/3) + "-" + to_string(j/3))){
                    return false;
                }else{
                    uset.insert(string(1,num) + "at row" + to_string(i));
                    uset.insert(string(1,num) + "at col" + to_string(j));
                    uset.insert(string(1,num) + "at box" + to_string(i/3) + "-" + to_string(j/3));
                }
            }
        }

        return true;
    }
};
