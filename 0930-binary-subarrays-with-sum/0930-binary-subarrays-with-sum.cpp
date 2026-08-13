class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
          unordered_map<int,int> freq ;
          freq[0] = 1 ;

          int prefixsum = 0 ;
          int count = 0 ;

          for(int num : nums){
            prefixsum += num ;

            int required = prefixsum - goal ;
            if( freq.find(required) != freq.end()){
                count+= freq[required];
            }

            freq[prefixsum]++;
          }

          return count ;    
    }
};