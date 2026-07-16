public class Solution {
    public int[][] ImageSmoother(int[][] img) {
        int m = img.Length ;
        int n = img[0].Length ;

        int[][] result = new int[m][];
        for(int i=0 ; i<m ; i++){
            result[i] = new int[n];
        }

        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                int sum = 0 ;
                int count = 0 ;

                for(int x = i-1 ; x<=i+1 ; x++){
                    for(int y=j-1 ; y<=j+1 ; y++){
                        if(x>=0 && x<m && y>=0 && y<n){
                            sum += img[x][y];
                            count++;
                        }
                    }
                }

                result[i][j] = sum / count;
            }
        }
        
        return result;
    }
}