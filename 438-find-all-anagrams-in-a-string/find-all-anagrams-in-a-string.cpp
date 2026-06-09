class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        if(s.size() < p.size()){
            return result;
        }
        vector<int> pcount(26, 0);
        vector<int> scount(26, 0);
        for(int i=0; i<p.size(); i++){
            pcount[p[i] - 'a']++;
            scount[s[i] - 'a']++;
        }
        int start = 0;
        for(int end = p.size(); end < s.size(); end++){
            if(scount == pcount){
                result.push_back(start);
            }
            scount[s[end] - 'a']++;
            scount[s[start] - 'a']--;
            start++;
        }
        if(scount == pcount){
            result.push_back(start);
        }
        return result;
    }
};