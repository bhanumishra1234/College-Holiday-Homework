class Solution {
public:
    void solve(vector<int>& candidates, vector<vector<int>>& result, vector<int>& curr, int target, int n, int i){
        if(target == 0){
            result.push_back(curr);
            return;
        }
        if(i >= n || target < 0){
            return;
        }
        curr.push_back(candidates[i]);
        solve(candidates, result, curr, target - candidates[i], n, i + 1);
        curr.pop_back();
        while(i + 1 < n && candidates[i] == candidates[i + 1]) {
            i++;
        }
        solve(candidates, result, curr, target, n, i + 1);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        int n = candidates.size();
        vector<vector<int>> result;
        vector<int> curr;
        solve(candidates, result, curr, target, n, 0);
        sort(result.begin(), result.end());
        result.erase(unique(result.begin(), result.end()), result.end());
        return result;
    }
};