class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = accumulate(nums.begin() , nums.end() , 0);
        int digit = 0 ;
        for(int x : nums){
             
             while( x>0){
                digit += x%10 ;
                x = x /10 ;
             }
        }

        return abs(sum - digit);
    }
};