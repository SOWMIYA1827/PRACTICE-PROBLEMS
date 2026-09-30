class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string result = "";
        int depth = 0;

        for (char c : s) {
            if (c == '(') {
                depth++;
                result += c;
            }
            else if (c == ')') {
                if (depth > 0) {
                    depth--;
                    result += c;
                }
            }
            else {
                result += c;
            }
        }

        string ans = "";
        int open = depth;

        for (int i = result.length() - 1; i >= 0; i--) {
            if (result[i] == '(' && open > 0) {
                open--;
            }
            else {
                ans += result[i];
            }
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};