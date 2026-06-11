class Solution {
public:
    vector<string> generateParenthesis(int n) {
        int open = n;
        int close = n;
        vector<string> result;
        string op = "";
        solve(op, open, close, result);
        return result;
    }
    void solve(string op, int open, int close, vector<string> &result){
        if(open == 0 && close == 0){
            result.push_back(op);
            return;
        }
        if(open == close){
            string op1 = op;
            op1.push_back('(');
            solve(op1, open - 1, close, result);
        }
        else if(open == 0){
            string op1 = op;
            op1.push_back(')');
            solve(op1, open, close - 1, result);
        }
        else if(close == 0){
            string op1 = op;
            op1.push_back('(');
            solve(op1, open - 1, close, result);
        }
        else{
            string op1 = op;
            string op2 = op;
            op1.push_back('(');
            op2.push_back(')');
            solve(op1, open - 1, close, result);
            solve(op2, open, close - 1, result);
        }
    }
};