public class Solution {
    public int[][] Transpose(int[][] matrix) {
        int n = matrix.Length ;
        int m = matrix[0].Length;

        int[][] result = new int[m][];

        for(int i=0 ; i<m ; i++){
            result[i] = new int[n];
        }

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                result[j][i] = matrix[i][j];
            }
        }

        return result;
    }
}