class Solution {
public:
    int fib(int n) {
        int f1 = 0 , f2 = 1 ;
        int sum = 0 ;
        if ( n == 0 ) return f1 ;
        if ( n == 1 ) return f2 ;
        else{
            
            for(int i=2 ; i<=n ; i++){
               sum = f1 + f2 ;
                 f1 = f2 ;
                 f2 = sum ;
            }
        }
        return sum ;
    }
};