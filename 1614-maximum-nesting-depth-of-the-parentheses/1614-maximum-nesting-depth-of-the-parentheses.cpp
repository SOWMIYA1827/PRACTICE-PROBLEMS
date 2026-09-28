class Solution {
public:
    int maxDepth(string s) {
        int answer = 0 ;
        stack<char> storage;

        for(char c : s){
            if(c == '('){
                storage.push(c);
            }
            else if(c==')'){
                storage.pop();
            }
            int n = storage.size();
            answer = max(answer , n);
        }

        return answer ;
    }
};