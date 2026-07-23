class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int mn = nums[0];
        int n = nums.size();
        for(int i=1; i<n; i++){
            if(nums[i] >= mn) mn = nums[i];
        }
        int beg = 1;
        int end = mn;
        int divisor = -1;
        while(beg <= end){
            int mid = beg + (end - beg)/2;
            int th = 0;
            for(int i=0; i<n; i++){
                th += (nums[i] + mid - 1)/mid;
            }
            if(th <= threshold){
                end = mid - 1;
                divisor = mid;
            }
            else{
                beg = mid + 1;
            }
        }
        return divisor;
    }
};