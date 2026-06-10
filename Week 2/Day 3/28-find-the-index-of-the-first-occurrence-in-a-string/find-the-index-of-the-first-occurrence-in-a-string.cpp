class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size() < needle.size()) return -1;
        if(haystack.size() == needle.size() && haystack == needle) return 0;
        if(haystack.size() == needle.size() && haystack != needle) return -1;
        int start = 0;
        int end = needle.size();
        int p = -1;
        while(end <= haystack.size()){
            if(haystack.substr(start, end - start) == needle){
                p = start;
                break;
            }
            else{
                start++;
                end++;
            }
        }
        return p;
    }
};