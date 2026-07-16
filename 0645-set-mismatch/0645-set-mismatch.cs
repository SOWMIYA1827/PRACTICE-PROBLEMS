public class Solution {
    public int[] FindErrorNums(int[] nums) {
        Dictionary<int,int> freq = new Dictionary<int,int>();
        int dup = 0 ;
        foreach(int i in nums){
            if(freq.ContainsKey(i)){
                dup = i ;
                freq[i]++;
            }
            else{
                freq[i] = 1 ;
            }
        }
        
        int ans = 0 ;
        for(int i=1 ; i<=nums.Length ; i++){
            if(!freq.ContainsKey(i)){
                ans = i ;
                break;
            }
        }

        return new int[] {dup,ans};
    }
}