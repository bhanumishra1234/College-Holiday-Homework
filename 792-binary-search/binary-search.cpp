class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int beg = 0;
        int end = n-1;
        int mid = (beg + end)/2;
        while(beg <= end){
            mid = beg + (end - beg)/2;
            if(target == nums[mid]){
                return mid;
            }
            else if(target < nums[mid]){
                end = mid - 1;
            }
            else{
                beg = mid + 1;
            }
        }
        return -1;
    }
};