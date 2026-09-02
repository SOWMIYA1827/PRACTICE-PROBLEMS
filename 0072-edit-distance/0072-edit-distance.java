class Solution {
    public int minDistance(String word1, String word2) {
        int n = word1.length() , m = word2.length() ;
        int dp[][] = new int[n][m] ;

        if( n==0 ) return m ;
        if( m==0 ) return n ;

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                dp[i][j] = -1 ;
            }
        }

        return ways(n-1 , m-1 , word1 , word2 , dp);
    }

    int ways(int i , int j , String s1 , String s2 , int[][] dp){
        if( i<0 ) return j+1 ;
        if( j<0 ) return i+1 ;

        if( dp[i][j] != -1) return dp[i][j];

        int minimize = Integer.MAX_VALUE ;
        if(s1.charAt(i) == s2.charAt(j)){
            minimize = ways(i-1 , j-1 ,s1 , s2 , dp);
        }
        else{
            int replace = ways(i-1 , j-1 , s1 , s2 , dp);
            int insert = ways(i , j-1 , s1 , s2 , dp);
            int delete = ways(i-1 , j , s1 , s2 , dp);

            minimize = 1 + Math.min(replace ,Math.min(insert , delete));
        }

        return dp[i][j] = minimize ;
    }
}