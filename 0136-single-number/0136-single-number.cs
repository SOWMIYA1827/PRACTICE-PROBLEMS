public class Solution {
    public int SingleNumber(int[] nums) {
        Dictionary<int,int> result = new Dictionary<int,int>();
        int index = 0 ;
        foreach(int x in nums){
            if(!result.ContainsKey(x)){
                result[x] = 1;
            }else{
                result[x]++;
            }
        }

        foreach(var x in result){
            if(x.Value == 1){
                index = x.Key;
                break;
            }
        }

        return index;
    }
}