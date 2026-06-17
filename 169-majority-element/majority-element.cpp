class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int can;
        for(int i=0; i<nums.size(); i++){
            can = nums[i];
            int count = 0;
            for(int j=0; j<nums.size(); j++){
                if(nums[j] == can){
                    count++;
                }
            }
            if(count > nums.size()/2) return can;
        }
        return -1;
    }
};