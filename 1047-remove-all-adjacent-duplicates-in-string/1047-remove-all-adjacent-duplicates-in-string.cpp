class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.length();
        stack<char> x ;
        string y ;

        for(char i : s ){
            if(x.empty() || i!=x.top()){
                x.push(i);
            }else{
                x.pop();
            }
        }

        while(!x.empty()){
            y += x.top();
            x.pop();
        }
        reverse(y.begin(),y.end());
        return y;
    }
};