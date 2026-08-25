class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int start = 0;
        while(start < n && s[start] == ' ') start++;
        int end = n - 1;
        while(end >= 0 && s[end] == ' ') end--;
        string temp = "";
        for (int i = start; i <= end; i++) {
            if (s[i] == ' ' && (temp.empty() || temp.back() == ' ')) continue;
            temp.push_back(s[i]);
        }
        s = temp;
        n = s.size();
        reverse(s.begin(), s.end());
        int ws = 0;
        for(int i = 0; i <= n; i++){
            if(i == n || s[i] == ' '){
                reverse(s.begin() + ws, s.begin() + i);
                ws = i + 1;
            }
        }
        return s;
    }
};