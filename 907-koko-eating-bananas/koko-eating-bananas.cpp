class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int m = piles[0];
        for(int i=0; i<n; i++){
            if(m <= piles[i]){
                m = piles[i];
            }
        }
        int beg = 1;
        int end = m;
        int ans = end;
        while(beg <= end){
            int mid = beg + (end - beg)/2;
            long long t = 0;
            for(int i=0; i<n; i++){
                t += ((piles[i] + mid - 1)/mid);
            }
            if(t <= h){
                ans = mid;
                end = mid - 1;
            }
            else{
                beg = mid + 1;
            }
        }
        return ans;
    }
};