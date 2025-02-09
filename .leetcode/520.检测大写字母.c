#include<stdbool.h>
/*
 * @lc app=leetcode.cn id=520 lang=c
 *
 * [520] 检测大写字母
 */

// @lc code=start
bool isBig(char x){
    return x >= 'A' && x <= 'Z';
}

bool isLittle(char x){
    return x >= 'a' && x <= 'z';
}

bool detectCapitalUse(char* word) {
    int word_len=strlen(word);
    if(word_len==1)return true;   //只有一个字母，怎么都正确
    if(isLittle(word[0])){
        for(int i=0;i<word_len;i++){
            if(isBig(word[i]))return false;    //首字母小写，后面有大写的
        }
        return true;
    }else{  //首字母大写的情况
        if(word_len==2){
            return true;   //首字母大写，只有两个字母，那都true
        }else if(isLittle(word[1])){   //至少三个字母，第一个字母大写，第二个小写
            for(int i=2;i<=word_len;i++){
                if(isBig(word[i]))return false;  //第三个之后的字母有大写就返回false
            }
            return true;  //第一个大写，之后全是小写字母
        }else{   //至少三个字母，且前两个字母大写
            for(int i=2;i<=word_len;i++){
                if(isLittle(word[i]))return false;  //第三个之后的字母有小写就返回false
            }
            return true;  //全是大写字母
        }
    }
}
// @lc code=end