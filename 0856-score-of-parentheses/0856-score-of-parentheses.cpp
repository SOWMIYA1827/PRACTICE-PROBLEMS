class Solution {
public:
    int scoreOfParentheses(string s) {
        vector<int> storage;

        for(char c : s){
            if(c == '(') storage.push_back(0);
            else{
                if(storage.back() == 0){
                    storage.back() = 1;
                    continue;
                }

                int x = 0;
                while(!storage.empty() && storage.back()){
                    x+=storage.back();
                    storage.pop_back();
                }
                storage.pop_back();
                storage.push_back(x*2);
            }
        }

        return accumulate(storage.begin(),storage.end(),0);
    }
};