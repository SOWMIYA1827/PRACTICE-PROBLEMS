class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int c = nums[0];
        int g = nums[0];

        for(int i=1 ; i<n ; i++){
            c = max(nums[i], nums[i] + c);
            g = max( c , g);
        }

        return g ;
    }
};