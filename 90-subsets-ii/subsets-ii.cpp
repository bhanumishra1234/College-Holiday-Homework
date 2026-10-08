class Solution {
public:
    bool check(vector<vector<int>>& result, vector<int> curr){
        for(int i=0; i<result.size(); i++){
            if(result[i] == curr) return true;
        }
        return false;
    }
    void solve(vector<int>& nums, int i, int n, vector<vector<int>>& result, vector<int> curr){
        if(i >= n){
            sort(curr.begin(), curr.end());
            if(!check(result, curr)) result.push_back(curr);
            return;
        }
        solve(nums, i + 1, n, result, curr);
        curr.push_back(nums[i]);
        solve(nums, i + 1, n, result, curr);        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        vector<int> curr;
        vector<vector<int>> result;
        solve(nums, 0, n, result, curr);
        return result;
    }
};