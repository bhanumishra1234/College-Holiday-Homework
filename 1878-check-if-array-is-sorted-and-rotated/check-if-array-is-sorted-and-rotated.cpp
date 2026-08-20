class Solution {
public:
    int func(vector<int>& nums, int i, int n) {
        if (i == n) return 0;

        int drop = nums[i] < nums[(i - 1 + n) % n];

        return drop + func(nums, i + 1, n);
    }
    bool check(vector<int>& nums) {
        int n = nums.size();
        return func(nums, 0, n) <= 1;
    }
};