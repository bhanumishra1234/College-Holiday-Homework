class Solution {
public:
    int reverse(int x) {
        long long rx = 0;
        while(x != 0){
            rx = rx*10 + x%10;
            x = x/10;
        }
        if (rx > INT_MAX || rx < INT_MIN) {
            return 0;
        }
        return rx;
    }
};