class Solution {
public:
    int beauty(string &s, int l, int r){
        int freq[26] = {0};
        for(int i=l; i<=r; i++){
            freq[s[i] - 'a']++;
        }
        int maxi = 0;
        int mini = INT_MAX;
        for(int i=0; i<26; i++){
            if(freq[i] > 0){
                maxi = max(maxi, freq[i]);
                mini = min(mini, freq[i]);
            }
        }
        return maxi - mini;
    }
    int func(string &s, int l, int r){
        int n = s.size();
        if(l >= n) return 0;
        if(r >= n) return func(s, l + 1, l + 1);
        return beauty(s, l, r) + func(s, l, r + 1);
    }
    int beautySum(string s) {
        return func(s, 0, 0);
    }
};