#include<math.h>
/*
 * @lc app=leetcode.cn id=492 lang=c
 *
 * [492] 构造矩形
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructRectangle(int area, int* returnSize) {
    int W,L;    //wide和length,要求W<=L
    int min_diff=area-1;   //最小的L-W
    int print_w=1,print_l=area;   //要输出的长和宽
    for(W=1;W<=sqrt(area);W++){
        if(area%W==0){   //面积能整除宽
            L=area/W;  //长等于面积除以宽
            if(L-W<min_diff){
                min_diff=L-W;  //更新最小差值
                print_l=L;
                print_w=W;
            }
        }
    }
    int* result=malloc(sizeof(int)*2);
    result[0]=print_l;
    result[1]=print_w;
    *returnSize = 2;     //不知道这玩意有啥用
    return result;
}
// @lc code=end

