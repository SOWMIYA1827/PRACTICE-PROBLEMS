class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int c = nums[0];
        int g = nums[0];

        for(int i=1 ; i<n ; i++){
            c = max (c+nums[i] , nums[i]);
            g = max (g,c);
        }

        return g ;
    }
};