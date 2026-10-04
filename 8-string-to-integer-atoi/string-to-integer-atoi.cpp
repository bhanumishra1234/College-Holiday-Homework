class Solution {
public:
    int myAtoi(string s) {
        if(s.empty()) return 0;
        int i = 0;
        while(i < s.size() && (s[i] == ' ')) i++;
        int sign = 1;
        if(i < s.size() && s[i] == '+') i++;
        else if(i < s.size() && s[i] == '-'){
            sign = -1;
            i++;
        }
        int result = 0;
        while(i < s.size() && isdigit(s[i])){
            int digit = s[i] - '0';
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7)) {
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            result = result*10 + digit;
            i++;
        }
        result = result * sign;
        if(result >= INT_MAX) return INT_MAX;
        return result;
    }
};