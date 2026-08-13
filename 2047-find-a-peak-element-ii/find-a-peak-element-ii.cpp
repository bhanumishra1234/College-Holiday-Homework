class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        int beg = 0, end = n - 1;
        while(beg <= end){
            int mid = beg + (end - beg)/2;
            int maxval = -1;
            int row = -1;
            for(int i=0; i<m; i++){
                if(mat[i][mid] > maxval){
                    maxval = mat[i][mid];
                    row = i;
                }
            }
            int left, right;
            if(mid - 1 >= 0) left = mat[row][mid - 1];
            else left = -1;
            if(mid + 1 < n) right = mat[row][mid + 1];
            else right = -1;
            if(mat[row][mid] > left && mat[row][mid] > right) return {row, mid};
            else if(left > mat[row][mid]) end = mid - 1;
            else beg = mid + 1;
        }
        return {-1, -1};
    }
};