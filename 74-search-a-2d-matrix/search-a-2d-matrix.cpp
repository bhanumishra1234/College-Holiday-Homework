class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int begm = 0, endm = m - 1;
        while(begm <= endm){
            int midm = begm + (endm - begm)/2;
            if(matrix[midm][0] == target) return true;
            else if(matrix[midm][0] > target){
                endm = midm - 1;
            }
            else begm = midm + 1;
            int begn = 0, endn = n - 1;
            while(begn <= endn){
                int midn = begn + (endn - begn)/2;
                if(matrix[midm][midn] == target) return true;
                else if(matrix[midm][midn] >target) endn = midn - 1;
                else begn = midn + 1;
            }
        }
        return false;
    }
};