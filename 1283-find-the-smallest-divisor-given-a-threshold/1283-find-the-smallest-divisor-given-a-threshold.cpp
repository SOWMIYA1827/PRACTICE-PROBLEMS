class Solution {
public:
    bool checkdivide(vector<int> nums,int threshold,int mid){
        long long sum = 0 ;

        for(int i=0 ; i<nums.size() ; i++){
            sum += ( nums[i] + mid - 1)/mid ;

            if( sum > threshold){
                return false;
            }
        }

        return true  ;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin() , nums.end());
        int ans = high ;

        while( low <= high){
            int mid = low + (high - low)/2 ;

            if( checkdivide(nums,threshold,mid)){
               ans = mid;
               high  = mid-1 ;
            }
            else{
                low = mid + 1 ;
            }
        }

        return ans ;
    }
};