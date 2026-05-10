class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size() , count=0 ;
        int sum = 0;

       for(int i=0 ; i<k ; i++){
           sum += arr[i];
       }

          if((int)sum/k >= threshold){
            count++;
        }
        
       for(int i=k ; i<n ;i++){
        sum += arr[i] - arr[i-k];
        if((int)sum/k >= threshold){
            count++;
        }
       }
        return count;
    }
};