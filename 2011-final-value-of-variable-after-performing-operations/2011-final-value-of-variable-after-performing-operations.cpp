class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int i = 0 ;
        for( string x : operations){
            if(x=="--X" || x == "X--")  i--;
             if(x=="++X" || x == "X++") i++ ;
        }

        return i ;
    }
};