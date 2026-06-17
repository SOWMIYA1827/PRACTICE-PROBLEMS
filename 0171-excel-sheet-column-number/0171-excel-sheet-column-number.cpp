class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res = 0;
        for(int i=0 ; i<columnTitle.size() ; i++){
            char s = columnTitle[i];

            int num = static_cast<int>(s);

            res += num - 64 ;

            if( i!= columnTitle.size()-1) res *= 26 ;
        }

        return res ;
    }
};