class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxlen = 0 , count=0;

            for(int j=0 ; j<nums.size() ; j++){
                if(nums[j] == 1) {
                    count++;
                }
                else {
                      maxlen = max(maxlen , count);
                      count=0;
                }          
        }
     return max(maxlen,count);
    }
};