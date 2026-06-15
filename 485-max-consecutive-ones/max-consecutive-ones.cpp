class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mc = 0;
        int cc = 0;
        for(int i=0; i < nums.size(); i++){
            if(nums[i] == 1){
                cc++;
                mc = max(mc, cc);
            }
            else if(nums[i] == 0){
                cc = 0;
            }
        }
        return mc;
    }
};