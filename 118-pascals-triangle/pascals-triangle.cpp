class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for(int i=0; i<numRows; i++){
            vector<int> r(i + 1, 0);
            result.push_back(r);
        }
        for(int i=0; i<numRows; i++){
            for(int j=0; j<=i; j++){
                if(j == 0 || j == i){
                    result[i][j] = 1;
                }
                else if(i != 0){
                    result[i][j] = result[i - 1][j] + result[i - 1][j - 1];
                }
            }
        }
        return result;
    }
};