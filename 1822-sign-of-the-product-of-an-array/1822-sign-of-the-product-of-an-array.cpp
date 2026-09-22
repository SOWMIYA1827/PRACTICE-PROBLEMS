class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sign = 1;

        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            if (x == 0) {
                return 0;
            }
            if (x < 0) {
                sign *= -1;
            }
        }

        return sign;
    }
};