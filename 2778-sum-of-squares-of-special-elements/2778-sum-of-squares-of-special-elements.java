class Solution {
    public int sumOfSquares(int[] nums) {
        
        int n = nums.length ;

        int answer = 0 ;

        for(int i=1 ; i<=n ; i++){
            int value = nums[i-1];
            if( n%i == 0){
                answer += value * value ;
            }
        }

        return answer ;
    }
}