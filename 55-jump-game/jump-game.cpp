class Solution {
public:
    bool solverec(vector<int>& nums , int i, int n, vector<int>& dp){
        if(i >= n - 1) return true;
        if(dp[i] != -1) return dp[i];
        if(nums[i] == 0) return dp[i] = 0;
        int s = nums[i];
        while(s > 0){
            bool a = solverec(nums, i + s, n, dp);
            if(a) return dp[i] = 1;
            s--;
        }
        return dp[i] = 0;
    }
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if(n == 0 || n == 1) return true;
        vector<int> dp(n + 1, -1);
        return solverec(nums, 0, n, dp);
    }
};