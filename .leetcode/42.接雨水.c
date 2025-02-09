/*
 * @lc app=leetcode.cn id=42 lang=c
 *
 * [42] 接雨水
 */

// @lc code=start
int min(int x,int y){
    return (x<y)?x:y;
}

int trap(int* height, int heightSize) {
    //代码有点长，简单写下思路
    //每个坐标值那一列接的水，就是min(left_max,right_max)减去该坐标值
    //当然前提是min要比该坐标值大

    int num=0;   //总共接num的水
    
    //left_max直接在循环里更新就行
    int left_max=0;
    //right_max，从又往左遍历，把每个坐标值的right_max都存数组里
    int right_max[heightSize];
    right_max[heightSize-1]=height[heightSize-1];
    for(int i=heightSize-2;i>=0;i--){
        if(height[i]>right_max[i+1]){
            right_max[i]=height[i];
        }else{
            right_max[i]=right_max[i+1];
        }
    }
    //计算num
    for(int i=1;i<heightSize-1;i++){
        if(left_max<height[i-1])left_max=height[i-1];
        if(min(left_max,right_max[i+1])>height[i]){
            num+=min(left_max,right_max[i+1])-height[i];
        }
    }
    return num;
}
// @lc code=end

