/*
 * @lc app=leetcode.cn id=463 lang=c
 *
 * [463] 岛屿的周长
 */

// @lc code=start

//四个方向
int direction[4][2]={1,0,0,1,0,-1,-1,0};

int islandPerimeter(int** grid, int gridSize/*行数*/, int* gridColSize/*每行的列数*/) {
    int m=gridSize,n=*gridColSize;  //m行n列
    int Perimeter=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){       //外层两个循环遍历m行n列全部岛屿
            if (grid[i][j] == 1){          //当前为陆地时
                for(int k=0;k<4;k++){      //遍历四个方向
                    int nx=i+direction[k][0];
                    int ny=j+direction[k][1];
                    if(nx<0 || ny<0 || nx==m || ny==n ||(!grid[nx][ny])){
                        Perimeter++;
                    }
                }
            }

        }
    }
    return Perimeter;
}
// @lc code=end

