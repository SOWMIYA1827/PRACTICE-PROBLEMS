class Solution {
    public boolean threeFibonacciSum(int n) {
        int first = 0 ;
        int second = 1 ;
        int third = first + second ;

        int sum = first + second + third ;
           if( sum == n ){
                return true ;
             }
        while( sum < n){
             first = second ;
             second = third ;
             third = first + second ;

             sum = first + second + third ;
             if( sum == n ){
                return true ;
             }
        }
        return false ;
    }
}