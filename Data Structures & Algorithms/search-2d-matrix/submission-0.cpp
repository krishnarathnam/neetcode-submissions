class Solution {
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target) {
    int k = 0, l = matrix.size() - 1;
    int i = 0, j = matrix[0].size() - 1;

    while (k <= l) {
        int m = k + (l - k) / 2;

        if (target > matrix[m][j]) {
            k = m + 1;
            continue;
        } else if (target < matrix[m][i]) {
            l = m - 1;
            continue;
        } else {
            while (i <= j) {
                int n = i + (j - i) / 2;
    
                if (matrix[m][n] == target)
                    return true;
                else if (target < matrix[m][j])
                    j = n - 1;
                else if (target > matrix[m][i])
                    i =  n + 1;
            }
        }
        return false;
    }

    return false;
    }
};

