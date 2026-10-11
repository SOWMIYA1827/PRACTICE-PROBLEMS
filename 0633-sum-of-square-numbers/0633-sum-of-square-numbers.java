
class Solution {
    public boolean judgeSquareSum(int c) {
        for (int y = (int) Math.sqrt(c); y >= 0; y--) {
            int balance = c - y * y;

            double balance1 = Math.sqrt(balance);
            int x = (int) balance1;

            if (x * x + y * y == c) {
                return true;
            }
        }

        return false;
    }
}