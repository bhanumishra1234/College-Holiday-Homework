class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l = nums[n - 1];
        int beg = 0, end = n - 1;
        while(beg < n - 1 && nums[beg] == l) beg++;
        while(beg < end){
            int mid = beg + end >> 1;
            if(nums[mid] > l) beg = mid + 1;
            else end = mid;
        }
        return nums[beg];
    }
};