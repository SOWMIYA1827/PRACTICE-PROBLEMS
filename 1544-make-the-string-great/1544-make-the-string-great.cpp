class Solution {
public:
    string makeGood(string s) {
        stack<char> x ;
        int num = s.length();

        for(char c : s ) {
            
            if ( !x.empty() && abs(x.top() - c) == 32){
                x.pop();
            }
            else{
                x.push(c);
            }
        }

        string t = "";

        while(!x.empty()){
           t += x.top();
           x.pop();
        }

       reverse(t.begin(),t.end());
       return t;
    }
};