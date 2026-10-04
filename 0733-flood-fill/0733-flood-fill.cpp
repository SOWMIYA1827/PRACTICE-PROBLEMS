class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();

        int original = image[sr][sc];

        if(original == color){
            return image;
        }
        
        image[sr][sc] = color;
        queue<pair<int,int>> q;
        q.push({sr,sc});

        int dx[] = {-1,1,0,0};
        int dy[] = {0,0,1,-1};

        while(!q.empty()){
            auto[x,y] = q.front();
            q.pop();

            for(int i=0 ; i<4 ; i++){
                int nx = x + dx[i];
                int ny = y + dy[i];

                if(nx >= 0 && nx < n && ny >= 0 && ny < m){
                    if(image[nx][ny] == original){
                        image[nx][ny] = color ;
                        q.push({nx,ny});
                    }
                }
            }
        }
        return image ;
    }
};