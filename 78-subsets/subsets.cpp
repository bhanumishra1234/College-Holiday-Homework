class Solution {
public:
    void solve(vector<int>& nums, int i, int n, vector<vector<int>>& result, vector<int> curr){
        if(i >= n){
            result.push_back(curr);
            return;
        }
        solve(nums, i + 1, n, result, curr);
        curr.push_back(nums[i]);
        solve(nums, i + 1, n, result, curr);        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int> curr;
        vector<vector<int>> result;
        solve(nums, 0, n, result, curr);
        return result;
    }
};