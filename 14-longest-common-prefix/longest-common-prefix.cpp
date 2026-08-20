class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        int end = INT_MAX;
        int n = strs.size();
        for(int i=0; i<n; i++){
            if(strs[i].length() < end) end = strs[i].length();
        }
        for(int i=0; i<end; i++){
            for(int j=1; j<n; j++){
                if(strs[j][i] != strs[0][i]) return result;
            }
            result += strs[0][i];
        }
        return result;
    }
};