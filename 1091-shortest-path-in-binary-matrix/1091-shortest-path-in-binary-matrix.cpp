class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        if(grid[0][0] == 1 || grid[n-1][m-1] == 1){
            return -1 ;
        }

        queue<pair<int,int>> q;
        q.push({0,0});

        int dx[] = {-1,-1,-1,0,0,1,1,1};
        int dy[] = {-1,0,1,-1,1,-1,0,1};

        int distance = 1 ;
        while(!q.empty()){
            int size = q.size();

            for(int i=0 ; i<size ; i++){
                auto[x,y] = q.front();
                q.pop();

                if(x==n-1 && y==m-1){
                    return distance;
                }

                for(int i=0 ; i<8 ; i++){
                    int nx = x + dx[i];
                    int ny = y + dy[i];

                    if(nx >= 0 && nx < n && ny >= 0 && ny < m){
                        if(grid[nx][ny] == 0){
                            grid[nx][ny] = 1;
                            q.push({nx,ny});
                        }
                    }
                }
            }
              distance++;
        }

        return -1;
    }
};