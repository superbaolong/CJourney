#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool isSafe(int row,int col,int num,int board[9][9]){  //把num填到row行，col列，看合不合法
    //检查同一行
    for(int i=0;i<9;i++){
        if(board[row][i] == num)return false;
    }
    //检查同一列
    for(int i=0;i<9;i++){
        if(board[i][col] == num)return false;
    }
    //检查同一个3×3格子
    int bigrow=row/3;
    int bigcol=col/3;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(board[bigrow*3+i][bigcol*3+j]==num)return false;
        }
    }

    return true;
}

bool solveShudu(int board[9][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]==0){    //如果是空格就能改
                for(int num=1;num<=9;num++){  //尝试把1到9依次填进去
                    if(isSafe(i,j,num,board)){
                        board[i][j] = num; // 填入数字
                        if (solveShudu(board)) {
                            return true;
                        }
                        board[i][j] = 0; // 回溯                     
                    }
                }
                return false;  //九个数都填不了，无解
            }
        }
    }
    return true;    //填满了
}

void print_board(int board[9][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            printf("%d ",board[i][j]);
        }
        printf("\n");
    }
    
}

int main() {
    printf("输入九宫格:\n(题目中的空格用0表示,输入的每个数字用空格分开)\n");
    int board[9][9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            scanf("%d",&board[i][j]);
        }
    }
    if(solveShudu(board)){
        printf("数组已解决:\n");
        print_board(board);
    }else{
        printf("数组无解,哪个b出的\n");
    }

    system("pause");
    return 0;
}
