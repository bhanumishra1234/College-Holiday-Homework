class Solution {
public:
    int maxDepth(string s) {
        int n = s.length();
        int md = 0;
        int cd = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '(') cd++;
            else if(s[i] == ')')cd--;
            md = max(md, cd);
        }
        return md;
    }
};