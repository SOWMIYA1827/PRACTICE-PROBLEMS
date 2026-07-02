public class Solution {
    public bool IsPerfectSquare(int num) {
        double ans = Math.Sqrt(num);
        if(ans%1 == 0){
            return true;
        }

        return false;
    }
}