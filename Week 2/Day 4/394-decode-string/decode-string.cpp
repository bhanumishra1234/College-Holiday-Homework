class Solution {
public:
    string decodeString(string s) {
        int index = 0;
        return decodehelper(s, index);
    }
private:
    string decodehelper(string& s, int& index){
        string result = "";
        int k=0;
        while(index < s.size()){
            char ch = s[index];
            if(isdigit(ch)){
                k = k*10 + (ch - '0');
                index++;
            }
            else if(ch == '['){
                index++;
                string nstr = decodehelper(s, index);
                while(k>0){
                    result = result + nstr;
                    k--;
                }
            }
            else if(ch == ']'){
                index++;
                return result;
            }
            else{
                result = result + ch;
                index++;
            }
        }
        return result;
    }
};