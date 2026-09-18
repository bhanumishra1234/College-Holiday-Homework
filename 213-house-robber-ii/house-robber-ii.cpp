class Solution {
public:
    int solverec(vector<int>& nums,int i,int n, vector<int>& dp){
        if(i > n) return 0;
        if(dp[i] != -1) return dp[i];
        int take = nums[i] + solverec(nums, i + 2, n, dp);
        int skip = solverec(nums, i + 1, n, dp);
        return dp[i] = max(take, skip);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        if(n == 1) return nums[0];
        vector<int> dp1(n, -1);
        vector<int> dp2(n, -1);
        return max(solverec(nums, 0, n - 2, dp1), solverec(nums, 1, n - 1, dp2));
    }
};