class Solution {
    
    void dfs(int[][] mat , int i , int j){
        mat[i][j] = 0 ;
        int[][] dir = {{-1,0},{0,-1},{1,0},{0,1}};

        for(int k=0 ; k<4 ; k++){
            int r = i + dir[k][0];
            int c = j + dir[k][1];

            if( r>=0 && c>=0 && r<mat.length && c<mat[0].length && mat[r][c] == 1){
                dfs(mat,r,c);
            }
        } 
    }

    public int numEnclaves(int[][] grid) {
        int m = grid.length;
        int n = grid[0].length ;
        int count = 0 ;

        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                if( (i==0 || i==m-1 || j==0 || j==n-1) && grid[i][j] == 1){
                    dfs(grid,i,j);
                }
            }
        }

        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                if(grid[i][j] == 1){
                  count++;
                }
            }
        }

        return count ;
    }
}