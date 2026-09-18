class Solution {
public:
    int solverec(int n, int i, vector<int>& dp){
        if(i == n) return 1;
        if(i > n) return 0;
        if(dp[i] != -1) return dp[i];
        return dp[i] = solverec(n, i + 1, dp) + solverec(n, i + 2, dp);
    }
    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);
        return solverec(n, 0, dp);
    }
};