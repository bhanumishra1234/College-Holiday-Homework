class Solution {
public:
    bool isSubsequence(string s, string t) {
        int track = 0;
        bool result = true;
        for(int i=0; i<s.size(); i++){
            int pos = t.find(s[i], track);
            if(t.substr(track, t.size() - track).find(s[i]) == -1){
                result = false;
            }
            else{
                track = pos + 1;
            }
        }
        return result;
    }
};