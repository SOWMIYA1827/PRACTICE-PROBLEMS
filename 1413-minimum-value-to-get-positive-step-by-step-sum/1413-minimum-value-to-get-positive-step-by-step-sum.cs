public class Solution {
    public int MinStartValue(int[] nums) {
        
        int n = nums.Length ;
        int i=1 ;

        while(true){
            int[] temp = new int[n];

             temp[0] = i + nums[0];
             for(int j=1 ; j<n ; j++){
                temp[j] = temp[j-1] + nums[j] ;
            }

            bool found = true;
            for(int k=0 ; k<n ; k++){
                if(temp[k] < 1){
                    found = false;
                    break;
                }
            }

            if(found) 
                return i;

            i++;
        }
    }
}