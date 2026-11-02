class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n);
        vector<int> right(n);
        int leftproduct = 1;
        for(int i=0; i<n; i++){
            left[i] = leftproduct;
            leftproduct *= nums[i];
        }
        int rightproduct = 1;
        for(int i=n - 1; i>=0; i--){
            right[i] = rightproduct;
            rightproduct *= nums[i];
        }
        for(int i=0; i<n; i++) left[i] = left[i] * right[i];
        return left;
    }
};