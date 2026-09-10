class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> freq ;

        int sum = 0 ;
        int count = 0 ;

        freq[0] = 1 ;
        for(int num : nums){
             sum += num ;

            int rem = sum - k ;

            if(freq.find(rem) != freq.end()){
                count += freq[rem];
            }

            freq[sum]++;
        }

        return count ;
    }
};