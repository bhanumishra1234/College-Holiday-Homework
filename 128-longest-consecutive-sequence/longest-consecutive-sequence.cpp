class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        unordered_set<int> numset(nums.begin(), nums.end());
        int ls = 1;
        for(int num : numset){
            if(numset.find(num - 1) == numset.end()){
                int cnt = 1;
                int x = num;
                while(numset.find(x + 1) != numset.end()){
                    x = x  + 1;
                    cnt = cnt + 1;
                }
                ls = max(ls, cnt);
            }
        }
        return ls;
    }
};