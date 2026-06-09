class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int start = 0;
        int end = s1.size();
        bool result = false;
        sort(s1.begin(), s1.end());
        while(end <= s2.size()){
            string p = s2.substr(start, end - start);
            sort(p.begin(), p.end());
            if(p == s1){
                result = true;
            }
            start++;
            end++;
        }
        return result;
    }
};