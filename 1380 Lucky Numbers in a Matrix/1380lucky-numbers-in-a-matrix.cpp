class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size(); // Number of rows
        int n = matrix[0].size();
        vector<int> ans;
        vector<int> minRow(m); // to check all the minimumvalues of rows.
        for (int i = 0; i < m; i++) {
            int rowMin = matrix[i][0];
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] < rowMin) {
                    rowMin = matrix[i][j];
                }
            }
            minRow[i] = rowMin;
        }
            vector<int> maxCol(n);
            for (int j = 0; j < n; j++) {
                int colMax = matrix[0][j];
                for (int i = 1; i < m; i++) {
                    if (matrix[i][j] > colMax) {
                        colMax = matrix[i][j];
                    }
                }
                maxCol[j] = colMax;
            }
        
          for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] == minRow[i] && matrix[i][j] == maxCol[j]) {
                    ans.push_back(matrix[i][j]);
                }
            }
        }

        return ans;
    }
};