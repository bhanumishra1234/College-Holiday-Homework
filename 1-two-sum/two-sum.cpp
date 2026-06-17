class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0;
        int right = 0;
        while(left < n){
            int r = target - nums[left];
            for(int j = left + 1; j<n; j++){
                if(nums[j] == r){
                    right = j;
                    break;
                }
            }
            if(right == 0) left++;
            else break;
        }
        vector<int> result = {left, right};
        return result;
    }
};