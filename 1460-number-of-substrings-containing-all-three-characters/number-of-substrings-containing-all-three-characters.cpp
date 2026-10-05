class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        int l = 0, r = 0;
        int result = 0;
        vector<int> freq(3, 0);
        while(r < n){
            char curr = s[r];
            freq[curr - 'a']++;
            while(freq[0] > 0 && freq[1] > 0 && freq[2] > 0){
                result += n - r;
                char lc = s[l];
                freq[lc - 'a']--;
                l++;
            }
            r++;
        }
        return result;
    }
};