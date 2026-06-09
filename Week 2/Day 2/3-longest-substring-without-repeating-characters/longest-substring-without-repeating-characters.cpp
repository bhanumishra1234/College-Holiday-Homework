class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()) return 0;
        int start = 0;
        int end = 0;
        int maxlen = 0;
        while(end<s.size()){
            if(s.substr(start, end - start).find(s[end]) == string::npos){
                maxlen = max(maxlen, end - start + 1);
                end++;
            }
            else{
                start++;
            }
        }
        return maxlen;
    }
};