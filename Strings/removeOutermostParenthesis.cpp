//1021
class Solution {
public:
    string removeOuterParentheses(string S) {
        string ans;
        int open = 0;
        for (char c : S) {
            if (c == '(' && open++ > 0) ans += c;
            if (c == ')' && open-- > 1) ans += c;
        }
        return ans;
    }
};
