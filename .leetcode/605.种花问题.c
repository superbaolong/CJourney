#include<stdbool.h>

/*
 * @lc app=leetcode.cn id=605 lang=c
 *
 * [605] 种花问题
 */

// @lc code=start
bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int num=0;
    for(int i=0;i<flowerbedSize;i++){
        //当前没种时，考虑要不要种
        if(flowerbed[i]==0){
            bool canplant=1;
            // 检查左边是否有花
            if (i > 0 && flowerbed[i - 1] == 1) {
                canplant = false;
            }
            
            // 检查右边是否有花
            if (i < flowerbedSize - 1 && flowerbed[i + 1] == 1) {
                canplant = false;
            }
            if(canplant){
                flowerbed[i]=1;
                num++;
            }
        }
    }
    return (num>=n)?true:false;
}
// @lc code=end

