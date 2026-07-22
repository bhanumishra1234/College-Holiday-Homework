class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if(1LL * m * k > n) return -1;
        int beg = *min_element(bloomDay.begin(), bloomDay.end());
        int end = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = end;
        while(beg <= end){
            int mid = beg + (end - beg)/2;
            int f = 0;
            int b = 0;
            for(int i=0; i<n; i++){
                if(bloomDay[i] <= mid){
                    f++;
                    if(f == k){
                        b++;
                        f = 0;
                    }
                }
                else{
                    f = 0;
                }
            }
            if(b >= m){
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