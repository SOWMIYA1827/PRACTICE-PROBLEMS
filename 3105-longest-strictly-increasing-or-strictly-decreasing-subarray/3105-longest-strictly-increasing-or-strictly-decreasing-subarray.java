class Solution {
    public int longestMonotonicSubarray(int[] nums) {

        int n = nums.length;
        int inclen = 1, declen = 1;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {

                boolean inc = true;
                boolean dec = true;

                for (int k = i; k < j; k++) {

                    if (nums[k] >= nums[k + 1]) {
                        inc = false;
                    }

                    if (nums[k] <= nums[k + 1]) {
                        dec = false;
                    }
                }

                if (inc) {
                    inclen = Math.max(inclen, j - i + 1);
                }

                if (dec) {
                    declen = Math.max(declen, j - i + 1);
                }
            }
        }

        return Math.max(inclen, declen);
    }
}