class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int s = x;
        long long rx = 0;
        while(s != 0){
            rx = rx*10 + s%10;
            s = s/10;
        }
        if(rx == x) return true;
        return false;
    }
};