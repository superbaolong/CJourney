#include<stdbool.h>

/*
 * @lc app=leetcode.cn id=500 lang=c
 *
 * [500] 键盘行
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdbool.h>

bool isFirstRow(char letter) {
    return letter == 'q' || letter == 'w' || letter == 'e' || letter == 'r' || letter == 't' || 
           letter == 'y' || letter == 'u' || letter == 'i' || letter == 'o' || letter == 'p' || 
           letter == 'Q' || letter == 'W' || letter == 'E' || letter == 'R' || letter == 'T' || 
           letter == 'Y' || letter == 'U' || letter == 'I' || letter == 'O' || letter == 'P';
}

bool isSecondRow(char letter) {
    return letter == 'a' || letter == 's' || letter == 'd' || letter == 'f' || letter == 'g' || 
           letter == 'h' || letter == 'j' || letter == 'k' || letter == 'l' || 
           letter == 'A' || letter == 'S' || letter == 'D' || letter == 'F' || letter == 'G' || 
           letter == 'H' || letter == 'J' || letter == 'K' || letter == 'L';
}

bool isThirdRow(char letter) {
    return letter == 'z' || letter == 'x' || letter == 'c' || letter == 'v' || letter == 'b' || 
           letter == 'n' || letter == 'm' || 
           letter == 'Z' || letter == 'X' || letter == 'C' || letter == 'V' || letter == 'B' || 
           letter == 'N' || letter == 'M';
}


char** findWords(char** words, int wordsSize/*输入的单词总数*/, int* returnSize/*输出的单词总数*/) {
    char** result;
    *returnSize=0;
    int k=0;
    result=malloc(wordsSize*sizeof(char*));
    for(int i=0;i<wordsSize;i++){
        int hash[3]={0}; //三行都是0
        int len=strlen(words[i]);  //这个单词的长度
        for(int j=0;j<len;j++){
            if(isFirstRow(words[i][j])){
                hash[0]++;
            }else if(isSecondRow(words[i][j])){
                hash[1]++;
            }else{
                hash[2]++;
            }
        }
        if((hash[0]==0&&hash[1]==0) || (hash[0]==0&&hash[2]==0) || (hash[2]==0&&hash[1]==0)){
            result[k++]=words[i];
            (*returnSize)++;
        }
    }
    return result;
}
// @lc code=end

