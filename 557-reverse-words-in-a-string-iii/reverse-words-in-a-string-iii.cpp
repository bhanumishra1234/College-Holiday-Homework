class Solution {
public:
    string reverseWords(string s) {
        int lastSpaceIndex = -1;
        for(int strIndex = 0; strIndex <= s.size(); strIndex++){
            if(s[strIndex] == ' ' || strIndex == s.size()){
                reverse(s.begin() + lastSpaceIndex + 1, s.begin() + strIndex);
                lastSpaceIndex = strIndex;
            }
        }
        return s;
    }
};