class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> x ;
        stack<char> y ;

        for(char c : s ){
            if(c != '#'){
                x.push(c);
            }else if(!x.empty()){
                x.pop();
            }
        }
        for(char c : t ){
            if(c != '#' ){
                y.push(c);
            }else if (!y.empty()){
                y.pop();
            }
        }

        string a="";
        string b="";

        while(!x.empty()){
            a += x.top();
            x.pop();
        }
        while(!y.empty()){
            b += y.top();
            y.pop();
        }

        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());

        return a==b ;
    }
};