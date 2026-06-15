class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        vector<int> result;
        result.push_back(nums[0]);
        for(int i = 1; i<nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                result.push_back(nums[i]);
            }
        }
        nums = result;
        return result.size();
    }
};