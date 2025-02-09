/*
 * @lc app=leetcode.cn id=575 lang=c
 *
 * [575] 分糖果
 */

// @lc code=start
int distributeCandies(int* candyType, int candyTypeSize) {
    //一共candyTypeSize颗糖，只能吃一半
    int hash[200001]={0};
    int kinds=0;
    for(int i=0;i<candyTypeSize;i++){
        if(!hash[candyType[i]+100000]){
            hash[candyType[i]+100000]++;
            kinds++;
        }
    }
    if(kinds>candyTypeSize/2)return candyTypeSize/2;
    return kinds;
}
// @lc code=end

