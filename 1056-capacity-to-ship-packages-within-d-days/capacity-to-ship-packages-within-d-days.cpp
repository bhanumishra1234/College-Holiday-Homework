class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int ms = 0;
        int ma = weights[0];
        int capacity = -1;
        for(int i=0; i<n; i++){
            if(weights[i] >= ma) ma = weights[i];
            ms += weights[i];
        }
        int beg = ma;
        int end = ms;
        while(beg <= end){
            int mid = beg + (end - beg)/2;
            int day = 1;
            int load = 0;
            for(int i=0; i<n; i++){
                if(load + weights[i] > mid){
                    day++;
                    load = 0;
                }
                load += weights[i];
            }
            if(day <= days){
                end = mid - 1;
                capacity = mid;
            }
            else{
                beg = mid + 1;
            }
        }
        return capacity;
    }
};