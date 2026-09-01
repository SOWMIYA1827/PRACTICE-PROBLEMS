class Solution {
    public void setZeroes(int[][] matrix) {
        int n = matrix.length ;
        int m = matrix[0].length ;
        boolean[] rowCounter =  new boolean[n];
        boolean[] colCounter = new boolean[m];    

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if( matrix[i][j] == 0){
                   rowCounter[i] =  true ;
                   colCounter[j] = true ;
                }
            }
        }

          for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if( rowCounter[i] || colCounter[j]){
                    matrix[i][j] = 0 ;
                }
                }
            }

        return;
    }
}