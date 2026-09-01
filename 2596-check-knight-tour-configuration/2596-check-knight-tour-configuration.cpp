class Solution {
public:
    int row[8] = {2,1,-1,-2,-2,-1,1,2};
    int col[8] = {1 , 2 , 2 , 1 , -1 , -2 , -2 , -1};

    bool valid(int i , int j , int n ){
        return i >= 0 && i<n && j>=0 && j<n ;
    }

    bool dfs(vector<vector<int>>& grid , int i , int j){
        int n = grid.size();

        if( grid[i][j] == n*n-1){
            return true ;
        }

        for(int k=0 ; k<8 ; k++){
            int newi = i + row[k];
            int newc = j + col[k];

            if(valid(newi , newc , n) && grid[newi][newc] == grid[i][j] + 1){
                return dfs( grid , newi , newc);
            }
        }

        return false ;
    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        if( grid[0][0] != 0){
            return false ;
        }

        return dfs(grid , 0 , 0);
    }
};