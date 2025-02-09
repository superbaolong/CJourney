/*
 * @lc app=leetcode.cn id=495 lang=c
 *
 * [495] 提莫攻击
 */

// @lc code=start
int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration) {
    int sum_seconds=0;
    if(timeSeriesSize==1)return duration;   //提莫只攻击了一下
    for(int i=0;i<timeSeriesSize-1;i++){
        if(timeSeries[i+1]-timeSeries[i]<duration){
            sum_seconds+=timeSeries[i+1]-timeSeries[i];  //间隔时间比中毒持续时间短
        }else{
            sum_seconds+=duration;
        }
    }
    sum_seconds+=duration;
    return sum_seconds;
}
// @lc code=end

