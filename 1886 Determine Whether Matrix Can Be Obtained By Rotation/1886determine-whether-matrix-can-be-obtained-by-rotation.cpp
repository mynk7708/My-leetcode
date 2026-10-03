class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
        for (int k = 0; k < 4; k++) {
            // this loop will check if they match the orginial matrix (handles 0, 90, 180, 270 deg)
            if (target == mat) {
                return true;
            }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
               swap(mat[i][j],mat[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++){
                swap(mat[i][j],mat[i][n-j-1]);
            }
        }
        }
        return false;
    }
};