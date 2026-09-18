class Solution {
public:
    int solverec(vector<int>& nums,int n,int i, vector<int>& dp){
        if(i >= n - 1) return 0;
        int ans = INT_MAX;
        if(dp[i] != -1) return dp[i];
        for(int j=1; j<=nums[i]; j++){
            int next = i + j;
            if(next < n){
                int result = solverec(nums, n, next, dp);
                if(result != INT_MAX){
                    ans = min(ans, 1 + result);
                }
            }
        }
        dp[i] = ans;
        return ans;
    }
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n + 1, -1);
        return solverec(nums, n, 0, dp);
    }
};