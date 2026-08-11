class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end());

        int num = nums.size();
        return nums[num-k];
        
    }
};