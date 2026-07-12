public class Solution {
    public int[] NextGreaterElements(int[] nums) {
        int n = nums.Length ;
        int[] answer = new int[n];

        for(int i=0 ; i<n ; i++){
             answer[i] = -1 ;

            for(int j=0 ; j<n ; j++){
                 int index = (i+j) % n ;
                 if(nums[index] > nums[i]){
                    answer[i] = nums[index];
                    break;
                 }   
            }
        }
        return answer;
    }
}