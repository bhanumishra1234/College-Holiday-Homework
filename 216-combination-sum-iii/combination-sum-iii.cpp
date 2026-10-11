class Solution {
public:
    void solve(vector<vector<int>>& result, vector<int>& curr, int k, int n, int start){
        if(curr.size() == k){
            int sum = 0;
            for(int i=0; i<curr.size(); i++){
                sum = sum + curr[i];
            }
            if(sum == n){
                result.push_back(curr);
            }
            return;
        }
        for(int i=start; i<= 9; i++){
            curr.push_back(i);
            solve(result, curr, k, n, i + 1);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> curr;
        solve(result, curr, k, n, 1);
        return result;
    }
};