public class Solution {
    public string ToGoatLatin(string sentence) {
        string[] words = sentence.Split(" ");
        string vowels = "aeiouAEIOU";
        string ans = "";

        for(int i=0 ; i<words.Length ; i++){
            string word = words[i];

            if(vowels.Contains(word[0])){
                ans += word;
            }else{
                ans += word.Substring(1) + word[0];
            }

            ans += "ma" ;

            for(int j=0 ; j<=i ; j++){
                ans += 'a';
            }
            
            if(i != words.Length-1){
            ans += " ";
            }

        }

        return ans ;
    }
}