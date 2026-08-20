class Solution {
public:
    void func(vector<int>& nums, int i, long long& max1, long long& max2, long long& max3){
        if(i == nums.size()) return;
        long long x = nums[i];
        if(x != max1 && x != max2 && x != max3){
            if(x > max1){
                max3 = max2;
                max2 = max1;
                max1 = x;
            }
            else if(x > max2){
                max3 = max2;
                max2 = x;
            }
            else if(x > max3){
                max3 = x;
            }
        }
        func(nums, i + 1, max1, max2, max3);
    }
    int thirdMax(vector<int>& nums) {
        long long max1 = LLONG_MIN;
        long long max2 = LLONG_MIN;
        long long max3 = LLONG_MIN;
        func(nums, 0, max1, max2, max3);
        if(max3 == LLONG_MIN) return max1;
        return max3;
    }
};