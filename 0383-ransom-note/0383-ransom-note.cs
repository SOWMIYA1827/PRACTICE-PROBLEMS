public class Solution {
    public bool CanConstruct(string ransomNote, string magazine) {
        

        int[] count = new int[26];

        for(int i=0 ; i<magazine.Length ; i++){
            count[magazine[i] - 'a']++;
        }
        
        foreach(char c in ransomNote){
            count[c - 'a']--;

            if(count[c - 'a'] < 0){
                return false;
            }
        }

        return true;
    }

}