class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        for(int i=0; i<m; i++){
            int beg = 0, end = n - 1;
            while(beg <= end){
                int mid = beg + (end - beg)/2;
                if(matrix[i][mid] == target) return true;
                else if(matrix[i][mid] > target) end = mid - 1;
                else beg = mid + 1;
            }
        }
        return false;
    }
};