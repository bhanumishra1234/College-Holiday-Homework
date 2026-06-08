#include <algorithm>
#include <cctype>
class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0; i<s.size(); i++){
            if (!isalnum(s[i])){
                s.erase(i, 1);
                i--;
            }
        }
        bool result = true;
        for(int i = 0; i<s.size(); i++){
            if(tolower(s[i]) != tolower(s[s.size() - 1 - i])){
                result = false;
                break;
            }
        }
        return result;
    }
};