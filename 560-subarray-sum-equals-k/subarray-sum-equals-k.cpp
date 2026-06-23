class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> pc;
        int ps = 0;
        int cnt = 0;
        pc[0] = 1;
        for(int i=0; i<n; i++){
            ps = ps + nums[i];
            int remove = ps - k;
            if(pc.find(remove) != pc.end()){
                cnt = cnt + pc[remove];
            }
            pc[ps]++;
        }
        return cnt;
    }
};