public class Solution {
    public int FindNumbers(int[] nums) {
     int ans = 0;
        foreach(int x in nums){
            int count = 1 ;
    
        if(x >= 10 && x <= 99){ count *= 2 ;}
        else if ( x >= 100 && x <= 999) { count *= 3;}
        else if ( x >= 1000 && x <= 9999) { count *= 4;}
        else if ( x >= 10000 && x <= 99999) { count *= 5;}
        else if ( x >= 100000 && x <= 999999) { count *= 6;}

            if(count%2 == 0) ans++;
        }

        return ans;
    }
}