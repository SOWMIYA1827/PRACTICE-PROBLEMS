class Solution {
public:
    int binaryGap(int n) {
        bitset<32>value(n) ;
        int maxcount = 0 ;

        for(int i=0 ; i<32 ; i++){
            
           int count = 0 ;

            if(value[i]==1){

                for(int j=i+1 ; j<32 ; j++){
                    count++;

                    if(value[j] == 1){
                     maxcount = max(maxcount,count) ;
                     break ;
                    }
                }
            }
        }

        return maxcount ;
    }
};