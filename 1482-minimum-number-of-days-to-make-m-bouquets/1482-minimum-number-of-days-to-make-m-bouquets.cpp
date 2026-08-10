class Solution {
public:

    bool checkbloom(vector<int> bloomDay ,int  m ,int mid,int k){
          int boque = 0 ;
          int flowers = 0 ;

          for(int i=0 ; i<bloomDay.size() ; i++){
            if( bloomDay[i] <= mid){
                flowers++;

                if( flowers == k){
                    boque++;
                    flowers = 0 ;
                }
            }
                else{
                    flowers = 0 ;
                }
            
          }

        return boque >= m ;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k > bloomDay.size()){
            return -1 ;
        }

        int low = *min_element(bloomDay.begin() , bloomDay.end());
        int high = *max_element(bloomDay.begin() , bloomDay.end());
        int ans = -1 ;

        while( low <= high ){
            int mid = low + (high - low )/2 ;

            if(checkbloom(bloomDay , m , mid,k)){
                    ans = mid ;

                    high = mid - 1;
            }else{
                low = mid + 1 ;
            }
        }


        return ans ;
    }
};