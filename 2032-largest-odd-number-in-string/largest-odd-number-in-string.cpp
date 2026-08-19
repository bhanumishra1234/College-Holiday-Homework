class Solution {
public:
    string largestOddNumber(string num) {
        string result = "";
        int beg = 0;
        for(int i = num.length() - 1; i >=0; i--){
            int odd = num[i] - '0';
            if(odd % 2 != 0){
                for(int j=beg; j<=i; j++){
                    result += num[j];
                }
                beg = i;
            }
        }
        return result;
    }
};