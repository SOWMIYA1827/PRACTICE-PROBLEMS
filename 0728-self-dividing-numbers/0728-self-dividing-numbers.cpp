class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> arr;
        for(int i=left ; i<=right ; i++){
             int num = i ;
             int x = i ;
             bool flag = true ;

             while(x > 0){
                int rem = x%10 ;
                if(rem == 0 || num % rem != 0) {
                    flag = false ;
                    break;
                }
                x = x/10 ;
             }
               if ( flag ) arr.push_back(num);
        }

        return arr ;
    }
};