public class Solution {
    public bool IsOneBitCharacter(int[] bits) {
        
        int i=0 ; 
        while(i < bits.Length - 1){
            if(bits[i] == 0){
                i++;
            }else{
                i += 2;
            }
        }

       return i == bits.Length-1;
    }
}