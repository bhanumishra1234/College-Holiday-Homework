class Solution {
public:
    int hammingWeight(int n) {
        int l = n;
        int cnt = 0;
        while(l > 0){
            cnt = cnt + (l & 1);
            l = l>>1;
        }
        return cnt;
    }
};