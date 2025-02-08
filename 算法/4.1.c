#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main() {
    char l[500],m[500];
    scanf("%s%s",l+1,m+1);
    int len_l=strlen(l+1);
    int len_m=strlen(m+1);
    int i,j;
    int d[500][500]={0};

    for(i=1;i<=len_l;i++){
        for(j=1;j<=len_m;j++){
            if(l[i]==m[j]){
                d[i][j]=d[i-1][j-1]+1;
            }else{
                d[i][j]=(d[i][j-1]>d[i-1][j])?d[i][j-1]:d[i-1][j];
            }
        }
    }
    printf("%d\n",d[len_l][len_m]);

    system("pause");
    return 0;
}
