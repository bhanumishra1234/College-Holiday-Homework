class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int i = 0;
        for(char ch : s){
            if(ch == '('){
                if(i > 0) result += ch;
                i++;
            }
            else if(ch == ')'){
                i--;
                if(i > 0) result += ch;
            }
        }
        return result;
    }
};