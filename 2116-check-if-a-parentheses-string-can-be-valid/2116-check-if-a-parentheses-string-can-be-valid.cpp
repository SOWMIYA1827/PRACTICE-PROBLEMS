class Solution {
public:
    bool canBeValid(string s, string locked) {

        int n = s.length();

        if(n % 2 != 0) {
            return false;
        }

        stack<int> open;
        stack<int> wild;

        for(int i = 0; i < n; i++) {

            if(locked[i] == '1' && s[i] == '(') {
                open.push(i);
            }

            else if(locked[i] == '1' && s[i] == ')') {

                if(!open.empty()) {
                    open.pop();
                }

                else if(!wild.empty()) {
                    wild.pop();
                }

                else {
                    return false;
                }
            }

            else if(locked[i] == '0') {
                wild.push(i);
            }
        }

        // Match remaining '(' with wild positions
        while(!open.empty() && !wild.empty()) {

            if(open.top() < wild.top()) {
                open.pop();
                wild.pop();
            }
            else {
                return false;
            }
        }

        if(!open.empty()) {
            return false;
        }

        return true;
    }
};