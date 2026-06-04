class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if(m*n != r * c){
            return mat;
        }
        else{
            vector<vector<int>> remat(r, vector<int>(c));
            for(int i=0; i < m*n; i++){
                int originalr = i / n;
                int originalc = i % n;
                int nr = i / c;
                int nc = i % c;
                remat[nr][nc] = mat[originalr][originalc];
            }
            return remat;
        }
    }
};