class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.length() , k=3 , count=0;
   for(int i=0 ; i<=n-k ; i++){
       unordered_set<char> st;
       int flag = 1;
       
       for(int j=i ; j<i+k ; j++){
           
           if(st.count(s[j])){
               flag = 0;
               break;
           }
           
           st.insert(s[j]);
           
       }
       if(flag == 1) {
           count++;
       }
    }
    return count;
    }
};