class Solution {
public:
    void solve(vector<int>& candidates, int n, int target, int i, vector<vector<int>>& result, vector<int>& curr){
        if(target == 0){
            result.push_back(curr);
            return;
        }
        if(i >= n || target < 0){
            return;
        }
        curr.push_back(candidates[i]);
        solve(candidates, n, target - candidates[i], i, result, curr);
        curr.pop_back();
        solve(candidates, n, target, i + 1, result, curr);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>> result;
        vector<int> curr;
        solve(candidates, n, target, 0, result, curr);
        return result;
    }
};