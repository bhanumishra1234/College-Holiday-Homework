class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double csum = 0;
        for(int i = 0; i<k; i++){
            csum = csum + nums[i];
        }
        double msum = csum;
        for(int i=k; i<nums.size(); i++){
            csum = csum + nums[i] - nums[i - k];
            msum = max(msum, csum);
        }
        return msum/k;
    }
};