class Solution {
public:
    bool calculate(vector<int>& nums , int i , int target , vector<vector<int>>& dp){
        if(target == 0){
            return true ;
        }

        if( i>=nums.size() || target < 0){
            return false ;
        }

        if( dp[i][target] != -1){
            return dp[i][target];
        }

        bool pick = calculate( nums , i+1 , target-nums[i] , dp);
        bool nopick = calculate( nums , i+1 , target , dp);

        return dp[i][target] = (pick || nopick) ;
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();

        int sum = accumulate( nums.begin() , nums.end() , 0);
        int target = sum/2 ;

        if( sum%2 != 0){
            return false ;
        }

        vector<vector<int>> dp( n , vector<int>(target+1 , -1));
        return calculate(nums , 0 , target , dp);
    }
};