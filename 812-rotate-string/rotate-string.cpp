class Solution {
public:
    bool rotateString(string s, string goal) {
        int r = s.size();
        int l = goal.size();
        if(r != l) return false;
        s = s + s;
        for(int i=0; i<r; i++){
            if(s.substr(i, l) == goal) return true;
        }
        return false;
    }
};