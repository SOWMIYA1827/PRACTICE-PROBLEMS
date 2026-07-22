class Solution {
    
    boolean isvowel(char i){
        if(i=='a' ||i=='e' ||i=='i' ||i=='o' ||i=='u'){
            return true;
        }
        
        return false;
    }
    public int maxVowels(String s, int k) {
        int vowelcount = 0 ;
        int maxcount = 0 ;
        int n = s.length();
        
        for(int i=0 ; i<k ; i++){
            if(isvowel(s.charAt(i))) vowelcount++;
        }
        maxcount = vowelcount ;
        for(int i=k ; i<n ; i++){
            if(isvowel(s.charAt(i-k))){
                vowelcount--;
            }
            if(isvowel(s.charAt(i))){
                vowelcount++;
            }
            
            maxcount = Math.max(maxcount,vowelcount);
        }
        
        return maxcount;
    }
}