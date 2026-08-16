class Solution {
public:
    
    bool canplace(vector<int>& position, int m , int distance){
        int lastposition = position[0] ;
        int balls = 1 ;

        for(int i=1 ; i<position.size() ; i++){
            if( position[i] - lastposition >= distance){
                balls++;
                lastposition = position[i];
            }

            if( balls >= m){
                return true ;
            }
        }

        return false ;
    }
    int maxDistance(vector<int>& position, int m) {
        sort( position.begin() , position.end());
        int ans = 0 ;

        int low = 1 , high = position.back() - position.front();
        while( low <= high){
            int mid = low + (high - low)/2 ;

            if(canplace(position , m , mid)){
                ans = mid ;
                low = mid + 1;
            }else{
                high = mid -1 ;
            }
        }

        return ans;
    }
};