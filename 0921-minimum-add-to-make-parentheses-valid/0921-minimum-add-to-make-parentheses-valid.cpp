class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.length();

        int open = 0 , need = 0;
        for(int i=0 ; i<n ; i++){
           if(open > 0 && s[i] == ')'){
                open--;
            }else if(s[i] == '('){
                open++;
            }
            else{
                need++;
            } 
        }

        return need+open ;
    }
};