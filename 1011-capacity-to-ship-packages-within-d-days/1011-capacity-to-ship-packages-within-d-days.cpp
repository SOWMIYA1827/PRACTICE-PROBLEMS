class Solution {
public:
    bool check( vector<int>& weights, int days , int capacity ){

            int daysused = 1;
            int curweight = 0 ;

            for( int w : weights ){
                if( curweight + w <= capacity ){
                    curweight += w ;
                }
                else{
                    daysused++;
                    curweight = w ;
                }
            }
        return daysused <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element( weights.begin() ,weights.end() );
        int high = accumulate( weights.begin() ,weights.end() , 0);
        int answer = high ;

        while( low <= high ){
            int mid = low + (high - low)/2 ;

            if(check( weights , days , mid )){
                 answer = mid;
                 high = mid - 1;
            }
            else{
                low = mid + 1 ;
            }
        }

        return answer ;
    }
};