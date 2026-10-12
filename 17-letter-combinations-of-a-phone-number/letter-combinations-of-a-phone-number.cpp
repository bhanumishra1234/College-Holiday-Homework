class Solution {
public:
    void solve(string digits, vector<string>& result, string& s, int i){
        if(i >= digits.size()){
            result.push_back(s);
            return;
        }
        switch(digits[i]){
            case '2':
                s.push_back('a');
                solve(digits, result, s, i + 1);
                s.pop_back();
                s.push_back('b');
                solve(digits, result, s, i + 1);
                s.pop_back();
                s.push_back('c');
                solve(digits, result, s, i + 1);
                s.pop_back();
                break;
            case '3':
                s.push_back('d');
                solve(digits, result, s, i + 1);
                s.pop_back();
                s.push_back('e');
                solve(digits, result, s, i + 1);
                s.pop_back();
                s.push_back('f');
                solve(digits, result, s, i + 1);
                s.pop_back();
                break;
            case '4':
                s.push_back('g');
                solve(digits, result, s, i + 1);
                s.pop_back();
                s.push_back('h');
                solve(digits, result, s, i + 1);
                s.pop_back();
                s.push_back('i');
                solve(digits, result, s, i + 1);
                s.pop_back();
                break;
            case '5':
                s.push_back('j');
                solve(digits, result, s, i + 1);
                s.pop_back();
                s.push_back('k');
                solve(digits, result, s, i + 1);
                s.pop_back();
                s.push_back('l');
                solve(digits, result, s, i + 1);
                s.pop_back();
                break;
            case '6':
                s.push_back('m');
                solve(digits, result, s, i + 1);
                s.pop_back();
                s.push_back('n');
                solve(digits, result, s, i + 1);
                s.pop_back();
                s.push_back('o');
                solve(digits, result, s, i + 1);
                s.pop_back();
                break;
            case '7':
                s.push_back('p');
                solve(digits, result, s, i + 1);
                s.pop_back();
                s.push_back('q');
                solve(digits, result, s, i + 1);
                s.pop_back();
                s.push_back('r');
                solve(digits, result, s, i + 1);
                s.pop_back();
                s.push_back('s');
                solve(digits, result, s, i + 1);
                s.pop_back();
                break;
            case '8':
                s.push_back('t');
                solve(digits, result, s, i + 1);
                s.pop_back();
                s.push_back('u');
                solve(digits, result, s, i + 1);
                s.pop_back();
                s.push_back('v');
                solve(digits, result, s, i + 1);
                s.pop_back();
                break;
            case '9':
                s.push_back('w');
                solve(digits, result, s, i + 1);
                s.pop_back();
                s.push_back('x');
                solve(digits, result, s, i + 1);
                s.pop_back();
                s.push_back('y');
                solve(digits, result, s, i + 1);
                s.pop_back();
                s.push_back('z');
                solve(digits, result, s, i + 1);
                s.pop_back();
                break;
            default:
                break;
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        string s;
        solve(digits, result, s, 0);
        return result;
    }
};