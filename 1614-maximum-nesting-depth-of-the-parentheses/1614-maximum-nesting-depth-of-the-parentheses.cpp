class Solution {
public:
    int maxDepth(string s) {
        int answer = 0 ;
        int depth = 0 ;

        for(char c : s){
            if(c == '('){
                depth++;
            }
            else if(c==')'){
                depth--;
            }
            answer = max(answer , depth);
        }

        return answer ;
    }
};