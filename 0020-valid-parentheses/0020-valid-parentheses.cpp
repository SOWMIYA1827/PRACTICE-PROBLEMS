class Solution {
public:
    bool isValid(string s) {
        stack<char> st ;

        int num = s.size();
        for(int i=0 ; i<num ; i++){
            if( s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push( s[i] );
            }

            else if(!st.empty() && ((s[i] == ')' && st.top() == '(') ||
                                    (s[i] == ']' && st.top() == '[') || 
                                    (s[i] == '}' && st.top() == '{'))){
                st.pop();
            }
            else{
                return false ;
            }
        }

        return st.empty();
    }
};