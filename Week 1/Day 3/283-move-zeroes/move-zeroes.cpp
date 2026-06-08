class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int k=0; k<nums.size(); k++){
            for(int i=0; i<nums.size() - 1; i++){
                if(nums[i] == 0){
                    int temp = nums[i];
                    nums[i] = nums[i + 1];
                    nums[i + 1] = temp;
                }
            }
        }
    }
};