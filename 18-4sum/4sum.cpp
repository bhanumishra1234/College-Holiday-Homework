class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> result;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            for(int j = i + 1; j<n; j++){
                int left = j + 1;
                int right = n - 1;
                while(left < right){
                    long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];
                    if(sum == target){
                        result.insert({nums[i], nums[j], nums[left], nums[right]});
                        left++;
                        right--;
                    }
                    else if(sum > target) right--;
                    else left++;
                }
            }
        }
        vector<vector<int>> ans;
        for(auto& x:result) ans.push_back(x);
        return ans;
    }
};