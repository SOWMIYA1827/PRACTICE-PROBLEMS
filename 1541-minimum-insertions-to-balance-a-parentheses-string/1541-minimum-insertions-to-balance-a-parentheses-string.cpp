class Solution {
public:
    int minInsertions(string s) {
        int insertion = 0 ;
        int need = 0 ;

        for(char c : s){
            if( c=='('){
                need += 2 ;

                if(need%2 == 1){
                    insertion++;
                    need--;
                }
            }
            else{
                need--;

                if(need < 0){
                    insertion++;
                    need = 1 ;
                }
            }
        }
        return insertion + need ;
    }
};