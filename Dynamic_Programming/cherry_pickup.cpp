class Solution {
public:
    int fun(int i,int j1, int j2, vector<vector<int>>& grid, vector<vector<vector<int>>>& dp){
        int row = grid.size();
        int col = grid[0].size();
        if(i<0 || j1<0 || j2<0 || j1>=col || j2>=col){
            return -1e8;
        }
        if(i==row-1){
            if(j1==j2){
                return grid[i][j1];
            }else{
                return grid[i][j1]+grid[i][j2];
            }
        }
        if(dp[i][j1][j2]!=-1){
            return dp[i][j1][j2];
        }

        int maxi = -1e8;
        for(int x=-1;x<=1;x++){
            for(int y=-1;y<=1;y++){
                int value = 0;
                if(j1==j2){
                    value = grid[i][j1];
                }else{
                    value = grid[i][j1]+grid[i][j2];
                }
                value+=fun(i+1,j1+x,j2+y,grid,dp);
                maxi = max(maxi,value);
            }
        }
        return dp[i][j1][j2]=maxi;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<vector<int>>> dp(row, vector<vector<int>>(col,vector<int>(col,-1)));
        return fun(0,0,col-1,grid,dp);
        

    }
};