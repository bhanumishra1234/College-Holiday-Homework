class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> m;
        int n = nums.size();
        set<int> c;
        for(int i=0; i<n; i++){
            m[nums[i]]++;
            c.insert(nums[i]);
        }
        vector<int> result;
        for(auto& x : c){
            if(m[x] > n/3){
                result.push_back(x);
            }
        }
        return result;
    }
};