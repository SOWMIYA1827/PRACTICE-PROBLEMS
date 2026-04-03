class Solution {
public:
    int countDigits(int num) {
        int count = 0 , y = num;
        while(num > 0){
            int rem = num % 10 ;
            if ( y%rem == 0 ) count++;
            num = num / 10 ;
        }
        return count ;
    }
};