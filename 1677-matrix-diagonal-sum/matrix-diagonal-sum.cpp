class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();

        for (int i = 0; i < n; i++) {
            sum = sum + mat[i][i];           // Primary diagonal
            sum = sum + mat[i][n - 1 - i];    // Secondary diagonal
        }

        if (n % 2 != 0) {
            sum = sum - mat[n / 2][n / 2];    // Remove duplicate middle element
        }

        return sum;
    }
};
