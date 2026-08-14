class Solution {
public:
    int maximumLengthSubstring(string s) {
        int j=0;
        int maximumlen = 0 ;
        unordered_map<char,int> freq ;

        for(int i=0 ; i<s.length() ; i++){
              freq[s[i]]++;

              while( freq[s[i]] > 2){
                freq[s[j]]--;
                j++;
              }

              maximumlen = max(maximumlen , i-j+1);
        }
        return maximumlen ;

      
    }
};